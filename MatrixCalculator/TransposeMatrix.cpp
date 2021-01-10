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
*File function: funtion to calculcate the transpose matrix
*
*/


#include <iostream>
#include "TransposeMatrix.h"

using namespace std;

void transposeMatrix(int** matrix, int matrixSize) {

    cout << "Transpose of Matrix: " << endl;
    for (int j = 0;j < matrixSize;j++) {
        for (int i = 0;i < matrixSize;i++) {
            cout << matrix[i][j] << " ";

            if (i == matrixSize - 1)
                cout << endl;
        }
    }
}
