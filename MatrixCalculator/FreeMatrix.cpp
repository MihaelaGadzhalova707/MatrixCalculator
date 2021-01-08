#include <iostream>
#include "FreeMatrix.h"

using namespace std;

void freeMatrix(int** matrix, int matrixSize) {

	for (int i = 0; i < matrixSize; i++)
	{
		delete[] matrix[i];
	}
	delete[] matrix;
}
