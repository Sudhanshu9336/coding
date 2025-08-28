#include <iostream>
using namespace std;

int main() {
    int arr1[5] = {1, 3, 5, 7, 9};
    int arr2[3] = {2, 4, 6};
    int arr3[8]; // arr3 should be of size 8 (5+3)

    // Merging arr1 and arr2 into arr3
    for (int i = 0; i < 5; i++) {
        arr3[i] = arr1[i];
    }
    for (int i = 0; i < 3; i++) {
        arr3[5 + i] = arr2[i];
    }

    // Printing the merged array arr3
    cout << "Merged sorted array: ";
    for(int i=0;i<8;i++){
        for(int j=0;j<8-i;j++){
            if(arr3[j]>arr3[j+1]){
                int temp=arr3[j];
                arr3[j]=arr3[j+1];
                arr3[j+1]=temp;
            }
        }
    }
    cout<<"your merge sorted array is:"<<endl;
     for(int i=0;i<8;i++){
        cout<<arr3[i]<<" ";
     }
    

    return 0;
}
