from tika import parser
from pymongo import MongoClient


def extract_text_from_pdf(pdf_path):
    raw_text = parser.from_file(pdf_path)['content']
    return raw_text

def save_text_to_file(text, output_file):
    with open(output_file, 'w', encoding='utf-8') as file:
        file.write(text)


pdf_file_path = './certi-raw.pdf'
output_txt_file_path = './output-data.txt'


try:
    extracted_text = extract_text_from_pdf(pdf_file_path)
    save_text_to_file(extracted_text, output_txt_file_path)
    print(f"Extracted Text :\n , {output_txt_file_path}")
except Exception as e:
    print(f"Error: {e}")


#txt파일을 읽어서 mongodb에 데이터 삽입
def read_txt_file(file_path):
    with open(file_path, 'r', encoding='utf-8') as file:
        content = file.read()
    return content

def save_to_mongodb(text_content):
    client = MongoClient('mongodb://localhost:27017/')
    db = client['document']
    collection = db['search']

    document = {'content': text_content}
    result = collection.insert_one(document)

    print(f"{result.inserted_id}")

txt_file_path = './output-data.txt'

try:
    txt_content = read_txt_file(txt_file_path)
    save_to_mongodb(txt_content)
except Exception as e:
    print(f"Error: {e}")


