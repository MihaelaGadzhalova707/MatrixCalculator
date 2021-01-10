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
*File function: function to input numbers into the matrix
*
*/

#include <iostream>
#include "InputMatrix.h"

using namespace std;

void inputMatrix(int** matrix, int matrixSize) {

    for (int i = 0; i < matrixSize; i++) {
        for (int k = 0; k < matrixSize; k++) {
            cin >> matrix[i][k];
        }
    }
    cout << "\n";
}
