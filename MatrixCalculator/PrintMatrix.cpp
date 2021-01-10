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
*File function: funtion to print the entered matrix. Currentlu not used. Created with test purposes
*
*/


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
