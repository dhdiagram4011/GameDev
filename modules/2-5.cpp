/*
#include <stdio.h>
#include <iostream>

using namespace std;

//행의 크기와 열의 크기를 숫자로 입력받고 그 숫자만큼 각각 영어 알파벳으로 출력
//rows : 행, col : 열

int main() { 
	std::cout << "행의 크기 입력 : ";
	int rows; 
	std::cin >> rows; //행의 크기를 입력받고 행값에 저장한다 

	int *col = new int[rows];

	//열의 크기 입력받기 --> 열의 크기는 i
	for (int i = 0; i < rows; ++i) {
		std::cout << "열의 크기 : " << i;
		std::cin >> col[i];
	}

	//알파벳을 저장하고 a부터 행/열의 갯수에 따라 순서대로 출력
	char** charArray = new char*[rows]; //행
	char ch = 'a';

	for(int i = 0; i < rows; ++i) {
		charArray[i] = new char[col[i]];

		for (int j = 0; j < col[i]; ++j) {
			charArray[i][j] = ch;
			++ch;
		}
	}
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < col[i]; ++j) {
			cout << charArray[i][j] << " ";
		}
		cout << endl;
	}
}
*/