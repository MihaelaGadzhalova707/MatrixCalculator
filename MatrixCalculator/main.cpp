/**
*
* Solution to course project # 06
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2020/2021
*
* @author Mihaela Gadzhalova
* @idnumber 62452
* @compiler VS
*
*
*
*/

#include <iostream>
#include "InputMatrix.h"
#include "PrintMatrix.h"
#include "FreeMatrix.h"

using namespace std;

int main() {

	int matrixSize = 0;
	cout << "Input size of the matrix: ";
	cin >> matrixSize;

	int** matrix = new int* [matrixSize];
	for (int i = 0; i < matrixSize; i++)
	{
		matrix[i] = new int[matrixSize];
	}

	inputMatrix(matrix, matrixSize);

	printMatrix(matrix, matrixSize);

	freeMatrix(matrix, matrixSize);

	return 0;
}
