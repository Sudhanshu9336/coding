#include<iostream>
using namespace std;
int main(){
    int j=10;
    int temp;
    int arr[10];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0,j=n-1;i<n/2;i++,j--){
        
{
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    
}

    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}