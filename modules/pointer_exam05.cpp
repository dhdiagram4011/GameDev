//포인터와 배열의 관계

/*
#include <iostream>

using namespace std;

int main() {
	int arr[3] = { 10,20,30 };

	int* ptr_arr = arr;
	std::cout << arr << ' '; //출력 : 000000BEB19EFB88
	std:cout << endl;
	std::cout << arr[0] << "," << arr[1] << "," << arr[2] << ' ';
	std::cout << endl;
	std::cout << ptr_arr[0] << "," << ptr_arr[1] << "," << ptr_arr[2] << ' ';
	std::cout << endl;
	std::cout << sizeof(arr) << endl; //한글자당 4바이트 : 12
	std::cout << endl; 
	std::cout << sizeof(ptr_arr) << endl;
}
*/