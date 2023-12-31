//#include <iostream>

//using namespace std;

//pointer *******
/*
길이가 5인 int형 배열 arr을 선언하고 이를 1,2,3,4,5 로 초기화 한 다음, 이 배열의 첫번째 요소를 가리키는 포인터 변수 ptr을 선언한다.
그 다음 포인터 변수 ptr에 저장된 값을 증가시키는 형태의 연산을 기반으로 배열요소에 접근하면서 모든 배열요소의 값을 2씩 증가시키고 정상적으로 증가가 이뤄졌는지 확인하는 예제를 작성
*/


//int n = 100;  //변수의 선언
//int* ptr = &n; //포인터의 선언(타입* 포인터이름;)
//& : 주소연산자, * : 참조연산자(주소에 저장되어 있는 값 반환)
//int *ptr1, *ptr2; >> 2개의 int형 포인터 선언

//포인터 초기화
//int* ptr1 = &n; //초기화
//타입* 포인터이름 = &변수이름;
//타입 * 포인터이름 = &주소값;


//int arr[5] = {1,2,3,4,5};

/*
int main_quiz_01() {
	//std::cout << arr[1] << ' '; //배열의 첫번째 요소;
	std::cout << endl;
	int* ptr = arr;
	std::cout << ptr[0] << ' '; //포인터를 이용하여 배열의 요소에 접근
	std::cout << ptr[1] << ' ';
	std::cout << ptr[2] << ' ';
	std::cout << ptr[3] << ' ';
	std::cout << ptr[4] << ' ';
	std::cout << endl;
	for (int i = 0; i < 5; i++) { //포인터 변수 ptr에 저장된 값을 증가시키는 형태의 연산을 기반으로 배열요소에 접근하면서 모든 값을 2씩 증가시킴
		std::cout << ptr[i] + 2 << ' '; //2씩 증가된 값 : {3,4,5,6,7}
	}
}
*/


/*
그런데 이번에는 포인터 변수 ptr에 저장된 값을 변경시키지 않고 ptr을 대상으로 덧셈연산을 하여 그 결과로 반환되는 주소 값을 통해서 모든 배열요소에 접근하여 값을 2씩 증가시키는 예제를 작성해 보자
(주소값을 이용하여 모든 배열요소의 값을 2씩 증가 시켜라)
*/





/*
길이가 5인 int 형 배열 arr을 선언하고 이를 1,2,3,4,5로 초기화한 다음 이 배열의 마지막요소를 가리키는 포인터 변수 ptr을 선언한다.
그 다음 포인터 변수 ptr에 저장된 값을 감소시키는 형태의 연산을 기반으로 모든 배열요소에 접근하여 배열에 저장된 모든 정수를 더하여 그 결과를 출력하는 프로그램을 작성해 보자
*/

/*
int main() {
	int* ptr = arr;
	std::cout << ptr[0] << ' ';
	std::cout << ptr[1] << ' ';
	std::cout << ptr[2] << ' ';
	std::cout << ptr[3] << ' ';
	std::cout << ptr[4] << ' ';
	std::cout << endl;
	for (int i = 0; i < 5; i++) {
		std::cout << ptr[i] - 2 << ' ';
	}
	std::cout << endl;
}
*/
