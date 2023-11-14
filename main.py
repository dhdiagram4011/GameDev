from fastapi import FastAPI, HTTPException, Request
from fastapi.responses import HTMLResponse
from elasticsearch import Elasticsearch
from fastapi.templating import Jinja2Templates
import openai
import requests


app = FastAPI()
templates = Jinja2Templates(directory="templates")

elastic = Elasticsearch([{'host': '34.64.94.214', 'port': 9200, 'scheme':'http'}]) #엘라스틱에 데이터 넣기 위한 정보                                 본 스키마

#index_name = "chats" #인덱스생성필요, 인덱스내에 데이터 저장

@app.post('/customers/_doc') #port 9200 - elasticsearch port #fastapi 기동시에는 9200포트로 기동필요
async def elastic_logs():
    with open("log.txt", 'r', encoding='utf-8') as file: #log.txt 파일을 열어서 읽음, 파일은 없으면 생성 필요
        log_message = {"messages": file.read()}
    response = elastic.index(index=index_name, body=log_message) #엘라스틱의 인덱스에 데이터를 보냄
    return {"message": "로그 저장 완료!", "document_id": response["_id"]}


#검색페이지 접속 화면
@app.get('/search-ui', response_class=HTMLResponse)
def search_pg(request: Request):
    return templates.TemplateResponse("search.html", {"request":request, "results":None})



#엘라스틱서치에서 데이터 검색하기(index_name:chats 기반으로 데이터 검색) 
def searchEngine(index_name, query): #message key 기반으로 데이터 검색
    try:
        result = elastic.search(index=index_name, body={"query": {"match" : {"last_name": query}}})
        print("Elastic Search Value :",  result)

        return result["hits"]["hits"]
    except Exception as e:
        print("Error:" , e)
        raise



@app.get('/search')
def searchEngine_ep(index_name: str, query: str):
    try:
        results = searchEngine(index_name, query)
        request = elastic.search(index=index_name, body={"query": {"match" : {"last_name": query}}})
        return templates.TemplateResponse ("search.html",{"request": request, "results": results})
    except Exception as e:
        print(e)
        raise HTTPException(status_code=500, detail=str(e))


if __name__ == "__main__":
    import uvicorn
    uvicorn.run(app, host="0.0.0.0", port=8000)
