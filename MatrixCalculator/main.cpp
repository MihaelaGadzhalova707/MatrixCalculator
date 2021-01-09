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

#include "MultiplicationByScalar.h"
#include "MultiplicationByMatrix.h"
#include "DeterminantOfMatrix.h"
#include "DivideByScalar.h"
#include "TransposeOfMatrix.h"

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

	int** secondMatrix = new int* [matrixSize];
	for (int i = 0; i < matrixSize; i++)
	{
		secondMatrix[i] = new int[matrixSize];
	}

	cout << "Input a matrix: \n";
	inputMatrix(matrix, matrixSize);

	//printMatrix(matrix, matrixSize);

	char operation;
	cout << "Input operation: ";
	cin >> operation;
	cout << "\n";

	switch (operation) {

	case 's':
		int scalar;
		cout << "Input a scalar: ";
		cin >> scalar;
		multiplicationByScalar(matrix, matrixSize, scalar); break;
	case 'x':
		cout << "Input second matrix: \n";
		inputMatrix(secondMatrix, matrixSize);
		multiplicationByMatrix(matrix, secondMatrix, matrixSize); break;
	case 'd':
		cout << "The determinant of the matrix is: ";
		cout << determinantOfMatrix(matrix, matrixSize); 
		cout << "\n"; break;
	case '/':
		int divider;
		cout << "Input a scalar: ";
		cin >> divider;
		cout << "\n";
		divideByScalar(matrix, matrixSize, divider); break;
	case 't':
		transposeOfMatrix(matrix, matrixSize);
	}
	freeMatrix(matrix, matrixSize);

	return 0;
}
