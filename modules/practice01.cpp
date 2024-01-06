/*
#include <iostream>
#include <stdlib.h>

using namespace std;


int matrixArr[5][5] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20}; //10x10; // 25;

	int sum = { 0 };

	int cols = 5;
	int rows = 5;
	int value = 1;
	

	int main() {  
		for (int i = 1; i <= cols; i++) { //calculate
			for (int j = 1; j <= rows; j++) {
				matrixArr[cols][rows] = value;
				value++; 
			}
		}
		for (int i = 1; i <= cols; i++) { //result
			std::cout << ' ';
			for (int j = 1; j <= rows; j++) {
				std::cout << "(" << i << "," << j << ")";
				std::cout << ' ';
			}
			std::cout << endl;
		}
	}

	/*
	(1, 1) (1, 2) (1, 3) (1, 4) (1, 5)
	(2, 1) (2, 2) (2, 3) (2, 4) (2, 5)
	(3, 1) (3, 2) (3, 3) (3, 4) (3, 5)
	(4, 1) (4, 2) (4, 3) (4, 4) (4, 5)
	(5, 1) (5, 2) (5, 3) (5, 4) (5, 5)
	*/


