/*
#include <iostream>

using namespace std;

int main() {

	//10X10 ¥�� �迭 ����
	int matrix[10][10] = { 0 };
	
	int rowCount = 0; 
	int colCount = 0;

	//3X2 ��/���� �Է¹���
	std::cout << "�� ũ�� : ";
	std::cin >> rowCount;

	std::cout << "�� ũ�� : ";
	std::cin >> colCount;
	std::cout << endl;

	int number = 1;
	//3x2���
	for (int i = 0; i < rowCount; ++i) { //rowCount // ��
		for (int j = 0; j < colCount; ++j) { //colCount // ��
			matrix[i][j] = number; 
			++number;  //���� 3x2��ŭ ����
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


	

	//���
	for (int i = 0; i < transposeRowCount; ++i) {
		for (int j = 0; j < transposeColCount; ++j) {

			transposeMatrix[i][j] = matrix[j][i];
		}
		std::cout << endl;
	}

	//���
	for (int i = 0; i < transposeRowCount; ++i) {     // i -> row //ColCount =>2
		for (int j = 0; j < transposeColCount; ++j) { // j-> col

			std::cout << transposeMatrix[i][j] << " ";

		}
		std::cout << endl;
	}
	
	//vertical-matrix ===============================================================
	//���

	// ���� ���� 5 : (0,2) => (0,0)

	int verticalflipMatrix[10][10] = { 0 };
	
	int verticalflipMatrixColCount = transposeColCount;
	int verticalflipMatrixRowCount = transposeRowCount;


	for (int i = 0; i < verticalflipMatrixRowCount; ++i) {
		for (int j = 0; j < verticalflipMatrixColCount; ++j) {

			verticalflipMatrix[i][verticalflipMatrixColCount-j-1] = transposeMatrix[i][j];
		}
		std::cout << endl;
	}

	
	//���
	for (int i = 0; i < verticalflipMatrixRowCount; ++i) {     
		for (int j = 0; j < verticalflipMatrixColCount; ++j ) {

			std::cout << verticalflipMatrix[i][j] << " ";
		}
		std::cout << endl;
	}
	
}
*/



