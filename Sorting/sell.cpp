#include <iostream>
#include <vector>
using namespace std;

// Function to perform shell sort
void shellSort(vector<int>& arr) {
    int n = arr.size();

    for (int gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j; // Declare j here
            for (j = i; j >= gap && arr[j - gap] > temp; j=j- gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp; // Correct usage of j
        }
    }
    return;
}

// Helper function to print an array
void printArray(const vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {12, 34, 54, 2, 3};

    cout << "Original array: ";
    print(arr);
    cout << endl;

    shellSort(arr);

    cout << "Sorted array: ";
    printArray(arr);

    return 0;
}
