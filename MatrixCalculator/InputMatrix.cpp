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
