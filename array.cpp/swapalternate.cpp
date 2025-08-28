#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "enter the number of elements" << endl;
    cin >> n;

    int arr[10];
    cout << "enter your array" << endl;
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << endl << "your array is" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl << "swapping alternate elements:" << endl;
    for (int i = 0; i < n - 1; i = i + 2) {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
