
#include <iostream>
#include <stdlib.h>

using namespace std;


/*
4*4�� 2���� �迭�� ����� �̰��� 1���� 10���� ������ ������ �����ϰ� �����Ͽ� ����16���� �迭�� �����ϰ�, 2���� �迭�� ȭ�鿡 ���
������ ������ �־ �������. ������ 6���� ���ڴ� ��� 0�̴�. ������� 2���� �迭�� ȭ�鿡 ����϶�.
(16���߿� 6���� ��� 0����ó��)
*/

/*
col : ��
row : ��
*/

//16-6 = 10;

int matrix[4][4] = { 0 }; //4X4 ��� [i,j]

/*
4 x 4
arr[0][0] [0][1] [0][2] [0][3]
arr[1][0] [1][1] [1][2] [1][3]
arr[2][0] [2][1] [2][2] [2][3]
arr[3][0] [3][1] [3][2] [3][3]
*/

int rowCount = 0; //��
int colCount = 0; //��


//int rowCount;
//int colCount[4] = { 0 };
//������ 6���� �����Ⱚ >> 0���� .....

char ch = 1;

int main() {
	srand(time(NULL));
	std::cout << "���� ũ�� �Է� : ";
	std::cin >> rowCount;

	
	std::cout << "���� ũ�� �Է� : ";
	std::cin >> colCount;
	


	for (int i = 0; i < rowCount; ++i) {
		for (int j = 0; j < colCount; ++j) {
			matrix[i][j] = ch;
			ch++;    //����
		}
	}

	for (int i = 0; i < rowCount; ++i) {
		for (int j = 0; j < colCount; ++j) {
			matrix[i][j] = rand() % 10; //�����������
			//matrix[2][0] ~ [2][3] = 0;
			//matrix[3][2] ~ [3][3] = 0;
			matrix[2][j] = 0;
			matrix[3][0] = 0;
			matrix[3][1] = 0;
			//����?
			std::cout << matrix[i][j] << ' ';
		}
		std::cout << endl; //��º�
	}
}




