#include <iostream>
#include "MultiplicationByMatrix.h"

using namespace std;

void multiplicationByMatrix(int** matrix, int** secondMatrix, int matrixSize) {

    int** result = new int* [matrixSize];
    for (int i = 0; i < matrixSize; i++) {
        result[i] = new int[matrixSize];
    }

    for (int i = 0; i < matrixSize; i++) {
        for (int j = 0; j < matrixSize; j++) {
            result[i][j] = 0;
            for (int k = 0; k < matrixSize; k++)
                result[i][j] = result[i][j] + (matrix[i][k] * secondMatrix[k][j]);
        }
    }

    cout << "Result: \n";
    for (int i = 0; i < matrixSize; i++) {
        for (int j = 0; j < matrixSize; j++) {
            cout << result[i][j] << " ";
        }
        cout << "\n";
    }
}
