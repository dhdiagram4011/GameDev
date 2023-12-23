/*
#include <iostream>

using namespace std;

/*
숫자입력게임
0 ~ 100 사이의 수 입력
105입력 : 범위에 벗어난 숫자입니다.
30입력 : down
20입력 : up
25입력 : 정답입니다.


int startNum = 0;
int endNum = 100;
int thirty = 30;
int twenty = 20;
int answer = 25;


int main() {
	std::cout << "1부터 100사이의 숫자를 입력해 주세요 :";

	for (int i = 0; i <= 100; i++) {
		std::cin >> startNum;
		if (startNum > endNum) {
			std::cout << "범위에 벗어난 숫자 입니다.";
		}
		else if ( startNum >= thirty ){
			std::cout << "Down!";
		}
		else if ( startNum <= twenty ) {
			std::cout << "Up!";
		}
		else if (startNum == answer) {
			std::cout << "정답입니다!";
		}
	}
}
*/