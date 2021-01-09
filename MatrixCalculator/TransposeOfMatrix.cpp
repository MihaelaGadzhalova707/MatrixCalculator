#include <iostream>
#include "TransposeOfMatrix.h"

using namespace std;

void transposeOfMatrix(int** matrix, int matrixSize) {

    cout << "Transpose of Matrix: " << endl;
    for (int j = 0;j < matrixSize;j++) {
        for (int i = 0;i < matrixSize;i++) {
            cout << matrix[i][j] << " ";

            if (i == matrixSize - 1)
                cout << endl;
        }
    }
}
