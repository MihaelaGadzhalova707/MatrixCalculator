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
*File function: this file executes the basic functions of the matrix calculator
*
*/

#include <iostream>
#include "InputMatrix.h"
#include "PrintMatrix.h"
#include "FreeMatrix.h"

#include "WriteAndReadFile.h"
#include "MultiplicationByScalar.h"
#include "MultiplicationByMatrix.h"
#include "DeterminantOfMatrix.h"
#include "DivideByScalar.h"
#include "TransposeMatrix.h"


using namespace std;

int main() {

	writeAndReadFile();

	int matrixSize = 0;
	cout << "Input size of the matrix: ";
	cin >> matrixSize;

	//Allocate memory for first matrix
	int** matrix = new int* [matrixSize];
	for (int i = 0; i < matrixSize; i++) {
		matrix[i] = new int[matrixSize];
	}

	//Allocate memory for second matrix
	int** secondMatrix = new int* [matrixSize];
	for (int i = 0; i < matrixSize; i++) {
		secondMatrix[i] = new int[matrixSize];
	}

	cout << "Input a matrix: \n";
	inputMatrix(matrix, matrixSize);


	char operation;
	cout << "Input operation: ";
	cin >> operation;
	cout << "\n";

	switch (operation) {

	case '1':
		int scalar;
		cout << "Input a scalar: ";
		cin >> scalar;
		multiplicationByScalar(matrix, matrixSize, scalar); 
		break;

	case '2':
		cout << "Input second matrix: \n";
		inputMatrix(secondMatrix, matrixSize);
		multiplicationByMatrix(matrix, secondMatrix, matrixSize);
		break;

	case '3':
		cout << "The determinant of the matrix is: ";
		cout << determinantOfMatrix(matrix, matrixSize); 
		cout << "\n"; 
		break;

	case '4':
		int divider;
		cout << "Input a scalar: ";
		cin >> divider;
		cout << "\n";
		divideByScalar(matrix, matrixSize, divider); 
		break;

	case '5':
		cout << "I'm sorry! I couldn't do this function! You can't find the inverse matrix\n";
		break;

	case '6':
		transposeMatrix(matrix, matrixSize); 
		break;

	default: 
		cout << "Error!"; break;
	}

	freeMatrix(matrix, matrixSize);

	return 0;
}
