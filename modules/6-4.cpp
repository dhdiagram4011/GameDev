/*
#include <iostream>
#include <stdlib.h>

using namespace std;

/*
4*4의 2차원 배열을 만들고 이곳에 1에서 10까지 범위의 정수를 랜덤하게 생성하여 정수16개를 배열에 저장하고, 2차원 배열을 화면에 출력
동일한 정수가 있어도 상관없다. 나머지 6개의 숫자는 모두 0이다. 만들어진 2차원 배열을 화면에 출력하라.
(16개중에 6개는 모두 0으로처리)
*/

/*
col : 렬
row : 행
*/

//int matrix[4][4] = { 1,2,3,4,5,6,7,8,9,10 }; //초기화 : 16개, 숫자 : 10개

/*
int main() {

	int matrix[4][4] = { 1,2,3,4,5,6,7,8,9,10 }; //초기화

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			std::cout << matrix[i][j] << ' ';
		}
	}
}
*/


/*
4 x 4
arr[0][0] [0][1] [0][2] [0][3]
arr[1][0] [1][1] [1][2] [1][3]
arr[2][0] [2][1] [2][2] [2][3]
arr[3][0] [3][1] [3][2] [3][3]
*/

//int rowCount = 0; //행
//int colCount = 0; //렬


//int rowCount;
//int colCount[4] = { 0 };
//나머지 6개는 쓰레기값 >> 0으로 .....

//char ch = { 0 };


/*
int main() {
	srand(time(NULL));
	std::cout << "행의 크기 입력 : ";
	std::cin >> rowCount;

	
	std::cout << "열의 크기 입력 : ";
	std::cin >> colCount;
	


	//계산부
	for (int i = 0; i < rowCount; i++) {
		for (int j = 0; j < colCount; j++) {
			matrix[i][j];
		}
	}


	for (int i = 0; i < rowCount; i++) {
		for (int j = 0; j < colCount; j++) {
			matrix[i][j] = rand() % 10; //랜덤난수출력 ......
			//matrix[2][0] ~ [2][3] = 0;
			//matrix[3][2] ~ [3][3] = 0;
			//matrix[2][j] = 0;
			//matrix[3][0] = 0;
			//matrix[3][1] = 0;
			//16개의 숫자 중 10개의 숫자에만 렌덤적용 >> 나머지는 자동 0 적용
			std::cout << matrix[i][j] << ' ';
			//std::cout << ch++ << ' ';
		}
		std::cout << endl; //출력부
	}
}
*/

