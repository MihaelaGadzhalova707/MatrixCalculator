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
*File function: function to print the result of a matrix divided by a scalar (number), chosen by the user
*
*/
#include <iostream>
#include "DivideByScalar.h"

using namespace std;

void divideByScalar(int** matrix, int matrixSize, int scalar) {

    for (int i = 0; i < matrixSize; i++) {
        for (int j = 0; j < matrixSize; j++) {
            matrix[i][j] = matrix[i][j] / scalar;
        }
    }

    cout << "Result: \n";
    for (int i = 0; i < matrixSize; i++) {
        for (int j = 0; j < matrixSize; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
}
