//#include <iostream>
//#include <stdlib.h>

//using namespace std;

/*
������ ����(2~9��)�� �������� 3�� ���� ���ߴ� ���� ����
�� ) 3 x 2 = (�����Է��ϰ� ����)
Ʋ���� ���� ����
*/


//int dan[8]; //dan
//int number[9]; //number

//2�ܺ��� 9���� �������� 3�� ���� ���
//���������� �������� X
/*
int main() {
	srand(time(NULL)); //�ð��� �������� ���� ��������
	for (int i = 1; i <= 3; i++) { //������ 3�� ���;
		int answer = { 0 };
		int j = (rand() % 8) + 2;    //j = 2 ~ 9   
		int k = (rand() % 9) + 1;
		std::cout << j << "*" << k << endl;
		std::cout << "���� ������ ������ �Է��ϼ��� :";
		std::cin >> answer;
			std::cout << endl;
			if (answer != j * k)
				break;
		}
	}

//10���� ���� �������� ���� :  0 ~ 9 >> 1 ~ 9  


/*
int main() {
	srand(time(NULL)); //�ð��� �������� ���� ��������
	for (int i = 1; i <= 3; i++) {
		dan[i] = rand() % 10;
		number[i] = rand() % 10;
		std::cout << dan[i] << "*" << number[i] << endl;
		std::cout << "���� ������ ������ �Է��ϼ��� :";
		std::cin >> answer;
		std::cout << endl;
		if (answer != dan[i] * number[i])
			break;
	}
}
*/