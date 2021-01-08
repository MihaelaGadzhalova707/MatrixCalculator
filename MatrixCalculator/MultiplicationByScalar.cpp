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