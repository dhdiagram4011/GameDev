#include<iostream>

using namespace std;


int main() {
	

	char matrix[10][10] = { 0 }; //i,j

	int rowCount = 0;
	int colCount[10] = { 0 };

	std::cout << "���� ũ�� �Է� : ";
	std::cin >> rowCount; //���� ũ�⸦ �Է¹ް� �ప�� �����Ѵ� 

	for (int j = 0; j < rowCount; ++j) {
		std::cout << "���� ũ�� �Է� : ";
		std::cin >> colCount[j];
	}
	
	
	//�� �ε����� a���� ������ �ε��� ��ŭ ���ʴ�� ���
	//char ch = 97;

	char ch = 'a';

	for (int i = 0; i < rowCount; ++i) {
		for (int j = 0; j < colCount[i]; ++j) {
			matrix[i][j] = ch;
			++ch;
			//std::cout << colCount[j] << " ";
		}
	}

	for (int i = 0; i < rowCount; ++i) {
		for (int j = 0; j < colCount[i]; ++j) {
			std::cout << matrix[i][j] << " ";
		}
		std::cout << endl;
	}
}

	
	