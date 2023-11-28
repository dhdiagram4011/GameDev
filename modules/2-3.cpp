#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
	int arr[4][4];  //4행(i) 4열(j)

	int value = 1;
	//input
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			arr[i][j] = value;
			++value;
		}
	}

	//calc
	for (int i = 0; i < 3; ++i) {
		int rowSum = 0;
		for (int j = 0; j < 3; ++j) {

			//std::cout << arr[i][j] << "\t";
			rowSum += arr[i][j];
		}

		arr[i][3] = rowSum;
	}

	for (int i = 0; i < 4; ++i) { //숫자 4로 변경후 합 출력
		int colSum = 0;
		for (int j = 0; j < 3; ++j) {

			//std::cout << arr[i][j] << "\t";
			colSum += arr[j][i];
		}

		arr[3][i] = colSum;
	}

	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 4; ++j) {
			std::cout << arr[i][j] << "\t";
		}
		std::cout << endl;
	}


	//print

	/*
	
	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 4; ++j) {
			std::cout << arr[i][j] << "\t";
		}
		int sumRow = 0;

		for (int j = 0; j < 4; ++j) {
			sumRow += arr[i][j]; //각 행의 합
		}

		std::cout << sumRow << std::endl;
		std::cout << std::endl;

		
		if (i == 4) {
			for (int k = 0; k < 4; ++k) {
					for (int l = 0; l < 4; ++l) {
						std::cout << arr[k][l] << "\t";
						
						int sumCol = 0;
						sumCol += arr[k][l];
						//std::cout << sumCol << std::endl;
						std::cout << std::endl;
					}
					return 0;
				}
			}
		}
		

		
	}
	*/
}