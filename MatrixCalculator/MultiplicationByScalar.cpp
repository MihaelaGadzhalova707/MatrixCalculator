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
*File function: funtion to calculcate the multiplication of matrix by scalar (number), chosen by the user
*and print the result
*
*/

#include <iostream>
#include "MultiplicationByScalar.h"

using namespace std;

void multiplicationByScalar(int** matrix, int matrixSize, int scalar) {

    for (int i = 0; i < matrixSize; i++) {
        for (int j = 0; j < matrixSize; j++) {
            matrix[i][j] = matrix[i][j] * scalar;
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
