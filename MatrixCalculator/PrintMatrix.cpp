#include <iostream>
#include "PrintMatrix.h"

using namespace std;

void printMatrix(int** matrix, int matrixSize) {

	for (int row = 0; row < matrixSize; row++) {
		for (int col = 0; col < matrixSize; col++) {
			cout << matrix[row][col] << " ";
		}
		cout << "\n";
	}
}
