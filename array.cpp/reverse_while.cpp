#include<iostream>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    int arr[5];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=0;
    int j=4;

    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}