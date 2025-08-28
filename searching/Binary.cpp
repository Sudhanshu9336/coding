#include<iostream>
using namespace std;

int main(){
    int n, i = 0, j = 9, mid;
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    cout << "Enter the key which you want to find out: " << endl;
    cin >> n;

    while (j >= i) {
        mid = (i+j) / 2; // Calculate the middle index

        if (arr[mid] == n) {
            cout << "Element is found at index: " << mid << endl;
            break; // Break out of the loop once the element is found
        } else if (arr[mid] > n) {
            j = mid - 1; // Adjust the search range for the left half
        } else {
            i = mid + 1; // Adjust the search range for the right half
        }
    }

    if (j < i) {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}




    

    






