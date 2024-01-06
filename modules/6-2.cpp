//#include <iostream>
//#include <stdlib.h>

//using namespace std;

/*
구구단 문제(2~9단)를 랜덤으로 3개 내고 맞추는 게임 제작
예 ) 3 x 2 = (값을입력하고 엔터)
틀리면 게임 종료
*/


//int dan[8]; //dan
//int number[9]; //number

//2단부터 9단을 렌덤으로 3개 문제 출력
//전역변수는 가능한한 X
/*
int main() {
	srand(time(NULL)); //시간을 기준으로 정수 렌덤생성
	for (int i = 1; i <= 3; i++) { //구구단 3번 출력;
		int answer = { 0 };
		int j = (rand() % 8) + 2;    //j = 2 ~ 9   
		int k = (rand() % 9) + 1;
		std::cout << j << "*" << k << endl;
		std::cout << "위의 곱셉의 정답을 입력하세요 :";
		std::cin >> answer;
			std::cout << endl;
			if (answer != j * k)
				break;
		}
	}

//10으로 나눈 나머지의 범위 :  0 ~ 9 >> 1 ~ 9  


/*
int main() {
	srand(time(NULL)); //시간을 기준으로 정수 렌덤생성
	for (int i = 1; i <= 3; i++) {
		dan[i] = rand() % 10;
		number[i] = rand() % 10;
		std::cout << dan[i] << "*" << number[i] << endl;
		std::cout << "위의 곱셉의 정답을 입력하세요 :";
		std::cin >> answer;
		std::cout << endl;
		if (answer != dan[i] * number[i])
			break;
	}
}
*/