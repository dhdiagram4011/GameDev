/*
#include <iostream>

using namespace std;


/*
4*4�� 2���� �迭�� ����� �̰��� 1���� 10���� ������ ������ �����ϰ� �����Ͽ� ����16���� �迭�� �����ϰ�, 2���� �迭�� ȭ�鿡 ���
*/

/*
col : ��
row : ��

int matrix[4][4] = { 0 }; //4X4 ���

int rowCount = 0; //��
int colCount[4] = {0}; //��


char ch = 1;

int main() {

	std::cout << "���� ũ�� �Է� : ";
	std::cin >> rowCount;

	for (int j = 0; j < rowCount; ++j) {
		std::cout << "���� ũ�� �Է� :";
		std::cin >> colCount[j];
	}


	for (int i = 0; i < rowCount; ++i) {
		for (int j = 0; j < colCount[j]; ++j) {
			matrix[i][j] = ch;
			ch++;    //����
		}
	}


	for (int i = 0; i < rowCount; ++i) {
		for (int j = 0; j < colCount[j]; ++j) {
			std::cout << matrix[i][j] << ' ';
		}
		std::cout << endl; //��º�
	}
}
*/