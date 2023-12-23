/*
#include <iostream>

using namespace std;


/*
4*4의 2차원 배열을 만들고 이곳에 1에서 10까지 범위의 정수를 랜덤하게 생성하여 정수16개를 배열에 저장하고, 2차원 배열을 화면에 출력
*/

/*
col : 렬
row : 행

int matrix[4][4] = { 0 }; //4X4 행렬

int rowCount = 0; //행
int colCount[4] = {0}; //렬


char ch = 1;

int main() {

	std::cout << "행의 크기 입력 : ";
	std::cin >> rowCount;

	for (int j = 0; j < rowCount; ++j) {
		std::cout << "열의 크기 입력 :";
		std::cin >> colCount[j];
	}


	for (int i = 0; i < rowCount; ++i) {
		for (int j = 0; j < colCount[j]; ++j) {
			matrix[i][j] = ch;
			ch++;    //계산부
		}
	}


	for (int i = 0; i < rowCount; ++i) {
		for (int j = 0; j < colCount[j]; ++j) {
			std::cout << matrix[i][j] << ' ';
		}
		std::cout << endl; //출력부
	}
}
*/