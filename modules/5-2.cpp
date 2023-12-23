/*
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//문제 : 1~5 사이의 랜덤한 값이 10개 저장된 배열에서 중복된 값이 제거된 배열을 만들어주세요.
// ex)[1, 3, 3, 2, 1, 1, 4, 5, 5, 1, 3] ->[1, 3, 2, 4, 5]

/*
동적 사이즈 배열 :  크기가 정해진 배열이 아닌 요소를 추가하거나 삭제할 수 있는 임의 엑세스 가변크기 데이터 구조 << vector
*/

/*
int main() {

	// 단순 배열 내 숫자 출력하기
	int i = {};
	int array[10] = { 1,9,3,4,5,3,4,2,3,5 }; //1부터 5사이의 랜덤한 값이 10개 저장
	

	for (int i = 0; i < 10; i++) {
		std::cout << array[i] << ' ';
		vector <int> array[10]; //백터 선언
		//중복된 값을 제거
		sort(array[i].begin(), array[i].end());
		array[i].erase(unique(array[i].begin(), array[i].end()));
	}
	std::cout << endl;
	


}
*/

