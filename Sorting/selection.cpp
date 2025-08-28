#include<iostream>
using namespace std;

int main() {
    int arr[10] = {23, 4, 65, 76, 33, 22, 34, 1, 23, 43};
    int min, j;

    for (int i = 0; i < 9; i++) {
        min = i;
        for (int j = i + 1; j < 10; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        if (min != i) {
            swap(arr[i], arr[min]); // Corrected this line
        }
    }

    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
