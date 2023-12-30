#include <iostream>
#include <stdlib.h>  //rand 함수를 포함하고 있는 라이브러리

/*x정수를 10개 저장하는 배열을 만들고
1에서 10까지 범위의 정수를 랜덤하게 생성하여 배열에 저장.
그리고 배열에 든 숫자들과 평균을 출력.
*/

using namespace std;

int arr[10]; //i , j


int main() {
	int sum = 0;
	//std::cout << "정수를 10개를 입력하여 저장해 주세요 :";
	srand(time(NULL)); //시간을 기준으로 정수를 렌덤하게 생성 
	//std::cout << number; //random 생성
	std::cout << endl;

	for (int i = 1; i <= 10; i++) {
		//a = rand();
		//std::cout << a << endl;
		arr[i] = rand() % 10;  //나머지
		std::cout << arr[i] << ' ';
		sum += arr[i];
	}
	std::cout << endl;

	int essenceAvg = sum / 10;  
	
	std::cout << "현 배열숫자들의 평균값은 : " << essenceAvg << "입니다";
	std::cout << endl;
}



