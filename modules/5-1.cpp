/*
#include <iostream>

using namespace std;

int main() {

	//10X10 짜리 배열 생성
	int matrix[10][10] = { 0 };
	
	int rowCount = 0; 
	int colCount = 0;

	//3X2 행/을을 입력받음
	std::cout << "행 크기 : ";
	std::cin >> rowCount;

	std::cout << "열 크기 : ";
	std::cin >> colCount;
	std::cout << endl;

	int number = 1;
	//3x2출력
	for (int i = 0; i < rowCount; ++i) { //rowCount // 행
		for (int j = 0; j < colCount; ++j) { //colCount // 열
			matrix[i][j] = number; 
			++number;  //증가 3x2만큼 증가
		}
	}

	for (int i = 0; i < rowCount; ++i) {
		for (int j = 0; j < colCount; ++j) {
			std::cout << matrix[i][j] << " ";
		}
		std::cout <<endl;
	}

	int transposeMatrix[10][10] = { 0 };
	
	int transposeColCount = rowCount; //col -> row
	int transposeRowCount = colCount; //row 


	

	//계산
	for (int i = 0; i < transposeRowCount; ++i) {
		for (int j = 0; j < transposeColCount; ++j) {

			transposeMatrix[i][j] = matrix[j][i];
		}
		std::cout << endl;
	}

	//출력
	for (int i = 0; i < transposeRowCount; ++i) {     // i -> row //ColCount =>2
		for (int j = 0; j < transposeColCount; ++j) { // j-> col

			std::cout << transposeMatrix[i][j] << " ";

		}
		std::cout << endl;
	}
	
	//vertical-matrix ===============================================================
	//계산

	// 기존 숫자 5 : (0,2) => (0,0)

	int verticalflipMatrix[10][10] = { 0 };
	
	int verticalflipMatrixColCount = transposeColCount;
	int verticalflipMatrixRowCount = transposeRowCount;


	for (int i = 0; i < verticalflipMatrixRowCount; ++i) {
		for (int j = 0; j < verticalflipMatrixColCount; ++j) {

			verticalflipMatrix[i][verticalflipMatrixColCount-j-1] = transposeMatrix[i][j];
		}
		std::cout << endl;
	}

	
	//출력
	for (int i = 0; i < verticalflipMatrixRowCount; ++i) {     
		for (int j = 0; j < verticalflipMatrixColCount; ++j ) {

			std::cout << verticalflipMatrix[i][j] << " ";
		}
		std::cout << endl;
	}
	
}
*/



