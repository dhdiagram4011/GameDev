/*
#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <ctime>


//행과 열을 입려받되 1~10 사이의 정수가 아니면 "다시 입력하세요" 메시지 출력
//입력받은 행과열 만큼 영어 대문자를 렌덤으로 출력

using namespace std;


int main() {

	srand(static_cast< unsigned > (time(0)));
	cout << "행의 크기 입력 :";
	int rows;
	cin >> rows;

	int* col = new int[rows];

	//열의 크기 입력 (rows)
	for (int i = 0; i < rows; ++i) {
		cout << "열의크기 : " << i + 1;
		cin >> col[i];
	}

	//알파벳 저장 및 렌덤출력
	char** charArray = new char* [rows];

	for (int i = 0; i < rows; ++i) {
		charArray[i] = new char[col[i]];
		
		for (int j = 0; j < col[i]; j++) {
			charArray[i][j] = static_cast<char>((rand() % 26) + 65);
		}
	}

	//알파벳 출력
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < col[i]; j++) {
			cout << charArray[i][j] << " ";
		}
		cout << endl;
	}
}
*/