/*
#include <iostream>
#include <stdlib.h>

using namespace std;
*/


/*
구구단 문제(2~9단)를 랜덤으로 3개 내고 맞추는 게임 제작
예 ) 3 x 2 = (값을입력하고 엔터)
틀리면 게임 종료
*/

/*
int dan[8]; //dan
int number[9]; //number
int problemNum[3];
int answer = {0};

// i * j = k

//2단부터 9단을 렌덤으로 3개 문제 출력
int main() {
	srand(time(NULL)); //시간을 기준으로 정수 렌덤생성
	for (int i = 0; i <= 2; i++) {
		dan[i] = rand() % 10;
		number[i] = rand() % 10;
		std::cout << dan[i] << "*" << number[i] << endl;
		//std::cout << number[i];
		std::cout << "위의 곱셉의 정답을 입력하세요 :";
		std::cin >> answer;
			std::cout << endl;
		}
	}
*/



/*
int main() {
	srand(time(NULL));
	for (int i = 0; i <= 2; i++) {
		dan[i] = rand() % 10;
		number[i] = rand() % 10;
		std::cout << dan[i] << endl;
		std::cout << endl;
	}
	for (int j = 0; j <= 2; j++) {
		number[j] = rand() % 10;
		std::cout << number[j] << ' ';
	std:cout << endl;
		std::cout << dan[i] * number[j] << endl;
		std::cin >> answer;
	}
	std::cin >> answer;
}
*/
