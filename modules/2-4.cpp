/*
#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <ctime>


//��� ���� �Է��޵� 1~10 ������ ������ �ƴϸ� "�ٽ� �Է��ϼ���" �޽��� ���
//�Է¹��� ����� ��ŭ ���� �빮�ڸ� �������� ���

using namespace std;


int main() {

	srand(static_cast< unsigned > (time(0)));
	cout << "���� ũ�� �Է� :";
	int rows;
	cin >> rows;

	int* col = new int[rows];

	//���� ũ�� �Է� (rows)
	for (int i = 0; i < rows; ++i) {
		cout << "����ũ�� : " << i + 1;
		cin >> col[i];
	}

	//���ĺ� ���� �� �������
	char** charArray = new char* [rows];

	for (int i = 0; i < rows; ++i) {
		charArray[i] = new char[col[i]];
		
		for (int j = 0; j < col[i]; j++) {
			charArray[i][j] = static_cast<char>((rand() % 26) + 65);
		}
	}

	//���ĺ� ���
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < col[i]; j++) {
			cout << charArray[i][j] << " ";
		}
		cout << endl;
	}
}
*/