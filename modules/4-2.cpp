#include<iostream>

using namespace std;


int main() {
	

	char matrix[10][10] = { 0 }; //i,j

	int rowCount = 0;
	int colCount[10] = { 0 };

	std::cout << "행의 크기 입력 : ";
	std::cin >> rowCount; //행의 크기를 입력받고 행값에 저장한다 

	for (int j = 0; j < rowCount; ++j) {
		std::cout << "열의 크기 입력 : ";
		std::cin >> colCount[j];
	}
	
	
	//각 인덱스에 a부터 설정한 인덱스 만큼 차례대로 출력
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

	
	