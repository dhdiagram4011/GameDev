/*
#include <stdio.h>
#include <iostream>

using namespace std;

//���� ũ��� ���� ũ�⸦ ���ڷ� �Է¹ް� �� ���ڸ�ŭ ���� ���� ���ĺ����� ���
//rows : ��, col : ��

int main() { 
	std::cout << "���� ũ�� �Է� : ";
	int rows; 
	std::cin >> rows; //���� ũ�⸦ �Է¹ް� �ప�� �����Ѵ� 

	int *col = new int[rows];

	//���� ũ�� �Է¹ޱ� --> ���� ũ��� i
	for (int i = 0; i < rows; ++i) {
		std::cout << "���� ũ�� : " << i;
		std::cin >> col[i];
	}

	//���ĺ��� �����ϰ� a���� ��/���� ������ ���� ������� ���
	char** charArray = new char*[rows]; //��
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