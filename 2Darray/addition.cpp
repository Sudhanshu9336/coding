#include <iostream>
using namespace std;

int main() {
    int arr[3][4];

    // Reading elements of the matrix
    cout << "Enter the elements of the 3x4 matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> arr[i][j];
        }
    }

    // Printing the matrix
    cout << "The matrix is:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl; // Add a newline after each row
    }

    return 0;
}

  

