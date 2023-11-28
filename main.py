#elastic port : 7842

from fastapi import FastAPI, WebSocket, Request
from fastapi.responses import HTMLResponse
from elasticsearch import Elasticsearch
from fastapi.templating import Jinja2Templates
from fastapi.responses import HTMLResponse
from fastapi import APIRouter, FastAPI
from fastapi import APIRouter, FastAPI, WebSocket 
from datetime import datetime, timedelta
import openai
import requests
import json

app = FastAPI()
router = APIRouter()
templates = Jinja2Templates(directory="templates")

elastic = Elasticsearch([{'host': '34.64.225.78', 'port': 7842, 'scheme':'http'}]) #엘라스틱에 데이터 넣기 위한 정보

index_name = "customer" #인덱스생성필요, 인덱스내에 데이터 저장


#router
@router.get("/users/", tags=["users"])
async def read_users():
    return [{"username": "Rick"} , {"username":"Morthy"}]
app.include_router(router)

#websocket
#@router.websocket("/socket")


#웹소켓을 통하여 메시지를 보내기 위하여 html 화면에서 메시지 입력
#response_class=HTMLResponse >> html로 응답 반환
@app.get("/inputmsg" , response_class=HTMLResponse) 
async def socket_msg(request: Request):
    return templates.TemplateResponse("socket.html", {"request":request})


#화면에 메시지를 출력하고 이를 엘라스틱서치의 인덱스에 저장
@app.websocket("/socket")
async def socket_ep(ws: WebSocket):
    await ws.accept() #소켓 접속 허용
    await ws.send_text(f"connected client : {ws.client}")
    while True:
        data = await ws.receive_text() #수신대기
        await ws.send_text(f"message text was: {data}") # html의 {event.data}
        elastic.index(index='customer', body={'message':data})


@app.post('/customer/_doc') #port 9200 - elasticsearch port #fastapi 기동시에는 9200포트로 기동필요
async def elastic_logs():
    #현재 날짜 및 시간을 체크하여 로그가 앃인 기준으로 400일동안 보관 후 삭제
    current_time = datetime.utcnow()
    expiration_time = current_time + timedelta(days=400) #로그 적재 후 400일동안 저장
    with open("log.txt", 'r', encoding='utf-8') as file: #log.txt 파일을 열어서 읽음, 파일은 없으면 생성 필요
        log_message = {"messages": file.read()}
        data= {
            "log_message" : log_message,
            "@timestamp" : current_time,
            "expiration_time" : expiration_time
        }
        response = elastic.index(index=index_name, body=data)
        return {"message": "로그 저장 완료!", "document_id": response["_id"]}


#검색페이지 접속 화면
@app.get('/search-ui', response_class=HTMLResponse)
def search_pg(request: Request):
    return templates.TemplateResponse("search.html", {"request":request, "results":None})


#인덱스 삭제
@app.delete('/decindex')
def index_delete(index_name:str):
    elastic.indices.delete(index=index_name)
    return {"message" : f"{index_name} is delete successfully"}


#인덱스 생성
# @app.post('/creindex')
def index_create(index_name:str):
    elastic.indices.create(index=index_name)
    return {"message" : f"{index_name} is create successfully"}


#엘라스틱서치에서 데이터 검색하기(index_name 기반으로 데이터 검색) 
def searchEngine(index_name, query): 
    try:
        result = elastic.search(index=index_name, body={"query": {"match" : {"log_message.messages": query}}})
        print("Elastic Search Value :",  result)

        return result["hits"]["hits"]
    except Exception as e:
        print("Error:" , e)
        raise



#인덱스 내의 key:value를 기반으로 데이터 검색
@app.get('/search')
def searchEngine_ep(index_name: str, query: str):
    try:
        results = searchEngine(index_name, query) #인덱스에서 쿼리를 수행하여 단어를 검색
        request = elastic.search(index=index_name, body={"query": {"match" : {"log_message.messages": query}}})
        return templates.TemplateResponse ("search.html",{"request": request, "results": results}) #렌더링 화면(search.html)에 결과값 표출
    except Exception as e:
        print(e)
        raise HTTPException(status_code=500, detail=str(e))


if __name__ == "__main__":
    import uvicorn
    uvicorn.run(app, host="0.0.0.0", port=8000)
