//#include <iostream>
//#include <stdlib.h>

//using namespace std;

/*
������ �� �� �������� Ű����κ��� ������ �Է¹޾�(100���� ���� ����) ���� �迭�� �����ϰ�, �̰��� 1���� 100���� ������ ������ �����ϰ� ����.
�迭���� ���� ���� ������ �ϰ� �迭�� ����϶�.
*** ���ڸ� �����ϰ� ����;
*/



// i : ������ �������� ���
// j : ������ ����
/*
int main() {

	int countNumber;
	int inputArray[100];
	int storageArray[100];
	std::cout << "������ � �����Ͻðڽ��ϱ�? : ";
	std::cin >> countNumber; //������ ��� �������� ������ ����

	srand(time(NULL));
	for (int i = 1; i <= countNumber; i++) {
		int sum = { 0 };

		storageArray[i] = (rand() % 99) + 1;
		std::cout << storageArray[i] << ' '; //���� ���� ���
		std::cout << endl;
		sum += storageArray[i];
		//�� �� ����
		for (int j = 1; j <= countNumber; j++) {
			inputArray[j] = (rand() % 99) + 1;
			if (storageArray[i] == inputArray[j])
				std::cout << "�ߺ������Դϴ�" << ' ';
			else
				sum += inputArray[j];
				std::cout << inputArray[j] << ' ';
			//�ߺ��ȵȰ� ��Ƴ��� �迭�� ����
			//������ ������ ���ڰ� ������ ����, ������ ���� , �迭 1��
			//�̹� �Է��س��� ���ڿ��� ��
		}
		std::cout << endl;
	}
}
*/
