//#include <iostream>
//#include <stdlib.h>

//using namespace std;

/*
정수를 몇 개 저장할지 키보드로부터 개수를 입력받아(100보다 작은 개수) 정수 배열을 생성하고, 이곳에 1에서 100까지 범위의 정수를 랜덤하게 삽입.
배열에는 같은 수가 없도록 하고 배열을 출력하라.
*** 숫자를 렌덤하게 삽입;
*/



// i : 정수를 랜덤으로 출력
// j : 정수를 삽입
/*
int main() {

	int countNumber;
	int inputArray[100];
	int storageArray[100];
	std::cout << "정수를 몇개 저장하시겠습니까? : ";
	std::cin >> countNumber; //정수를 몇게 저장할지 저장할 변수

	srand(time(NULL));
	for (int i = 1; i <= countNumber; i++) {
		int sum = { 0 };

		storageArray[i] = (rand() % 99) + 1;
		std::cout << storageArray[i] << ' '; //숫자 렌덤 출력
		std::cout << endl;
		sum += storageArray[i];
		//비교 후 대입
		for (int j = 1; j <= countNumber; j++) {
			inputArray[j] = (rand() % 99) + 1;
			if (storageArray[i] == inputArray[j])
				std::cout << "중복숫자입니다" << ' ';
			else
				sum += inputArray[j];
				std::cout << inputArray[j] << ' ';
			//중복안된걸 모아놓은 배열을 구현
			//랜덤을 돌려서 숫자가 없으면 삽입, 있으면 제거 , 배열 1개
			//이미 입력해놓은 숫자에서 비교
		}
		std::cout << endl;
	}
}
*/
