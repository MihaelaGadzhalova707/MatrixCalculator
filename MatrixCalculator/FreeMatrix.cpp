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
*File function: Free the allocated memory for the matrix
*
*/

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
