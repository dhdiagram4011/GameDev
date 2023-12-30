/*
#include <iostream>
#include <stdlib.h>

using namespace std;

/*
숫자입력게임
0 ~ 100 사이의 수 입력
105입력 : 범위에 벗어난 숫자입니다.
30입력 : down
20입력 : up
25입력 : 정답입니다.


int inputNum = { 0 };
int endNum = 100;
int thirty = 30;
int twenty = 20;
int answer = 25;
int zero = 0;
*/

/*
렌덤함수 생성법
int main() {
	int a = rand();
}

못맞추면 계속 해야 됨

int main() {
	srand(time(NULL));
	int answer = rand() % 100;
	std::cout << answer;
	std::cout << endl;
	std::cout << "1부터 100사이의 숫자를 입력해 주세요 :";

	while (true) {
		std::cin >> inputNum;
		if (endNum < inputNum) { 
			std::cout << "범위에 벗어난 숫자 입니다.";
		std:cout << endl;
		}
		else if (inputNum < zero) {
			std::cout << "범위에 벗어난 숫자 입니다";
		std::cout << endl;
		}
		else if (answer > inputNum){
			std::cout << "Up!";
		std::cout << endl;
		}
		else if (answer < inputNum) {
			std::cout << "Down!";
		std::cout << endl;
		}
		else if (answer == inputNum) {
			std::cout << "정답입니다! , 게임을 종료합니다";
			break;
		std::cout << endl;
		}
	}
}
*/





