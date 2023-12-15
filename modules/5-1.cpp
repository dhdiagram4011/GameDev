#include <iostream>

using namespace std;

int main() {

	//10X10
	int matrix[10][10] = { 0 };
	
	int rowCount = 0; 
	int colCount = 0;

	//3X2

	std::cout << "행 크기 : ";
	std::cin >> rowCount;

	std::cout << "열 크기 : ";
	std::cin >> colCount;

	
	int number = 1;

	//3x2출력
	for (int i = 0; i < rowCount; ++i) { //rowCount
		for (int j = 0; j < colCount; ++j) { //colCount
			matrix[i][j] = number; 
			++number;  //증가
		}
	}

	for (int i = 0; i < rowCount; ++i) {
		for (int j = 0; j < colCount; ++j) {
			std::cout << matrix[i][j] << " ";
		}
		std::cout <<endl;
	}

	int transposeMatrix[10][10] = { 0 };

	int transposeColCount = rowCount;
	int transposeRowCount = colCount;


	//3x2  >> 2x3 transpose
	for (int i = 0; i < transposeColCount; ++i) {
		for (int j = 0; j < transposeRowCount; ++j) {
			transposeMatrix[i][j] = matrix[i][j];
		}
	}

	for (int i = 0; i < transposeColCount; ++i) {
		for (int j = 0; j < transposeRowCount; ++j) {
			std::cout << transposeMatrix[i][j] << " ";
		}
		std::cout << endl;
	}
}

