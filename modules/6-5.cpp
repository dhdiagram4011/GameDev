#include <iostream>

using namespace std;

/*
������ �� �� �������� Ű����κ��� ������ �Է¹޾�(100���� ���� ����) ���� �迭�� �����ϰ�, �̰��� 1���� 100���� ������ ������ �����ϰ� ����.
�迭���� ���� ���� ������ �ϰ� �迭�� ����϶�.
*** ���ڸ� �����ϰ� ����;
*/

int inputArray[100] = { 0 };
char ch = 1;


int main() {
	std::cout << "������ � �����Ͻðڽ��ϱ�? : ";
	std::cin >> inputArray[100]; //������ ��� �������� ������ ����

	for (int i = 0; i <= inputArray[100]; ++i) {
		inputArray[i] = ++ch;
		std::cout << inputArray[i] << ' ';
	}
	std::cout << endl;
}