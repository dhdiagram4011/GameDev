#include <iostream>
#include <stdlib.h>  //rand �Լ��� �����ϰ� �ִ� ���̺귯��

/*x������ 10�� �����ϴ� �迭�� �����
1���� 10���� ������ ������ �����ϰ� �����Ͽ� �迭�� ����.
�׸��� �迭�� �� ���ڵ�� ����� ���.
*/

using namespace std;

int arr[10]; //i , j


int main() {
	int sum = 0;
	//std::cout << "������ 10���� �Է��Ͽ� ������ �ּ��� :";
	srand(time(NULL)); //�ð��� �������� ������ �����ϰ� ���� 
	//std::cout << number; //random ����
	std::cout << endl;

	for (int i = 1; i <= 10; i++) {
		//a = rand();
		//std::cout << a << endl;
		arr[i] = rand() % 10;  //������
		std::cout << arr[i] << ' ';
		sum += arr[i];
	}
	std::cout << endl;

	int essenceAvg = sum / 10;  
	
	std::cout << "�� �迭���ڵ��� ��հ��� : " << essenceAvg << "�Դϴ�";
	std::cout << endl;
}



