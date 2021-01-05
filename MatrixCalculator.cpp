#include <iostream>

using  namespace std;

void inputAndPrintMatrix(int, int);

int main() {

    int rows;
    cout << "Input rows: ";
    cin >> rows;
    int columns;
    cout << "Input columns: ";
    cin >> columns;

    inputAndPrintMatrix(rows, columns);

    return 0;
}

void inputAndPrintMatrix(int rows, int columns) {

    int arr[rows][columns];
    for(int i = 0; i < rows; i++) {
        for(int k = 0; k < columns; k++) {

            cin >> arr[i][k];
        }
    }
    cout << endl;
    for(int i = 0; i < rows; i++) {
        for(int k = 0; k < columns; k++) {
            cout << arr[i][k] << " ";
        }
        cout << endl;
    }

}
