#include<iostream>
using namespace std;
int main(){
    int arr[6]={5,4,2,3,6,1};
    int temp=0;
    
    for(int i=1;i<6;i++){
        temp=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
             j--;
        }
        arr[j+1]=temp;
    }
    for(int i=1;i<6;i++){
        cout<<arr[i]<<" ";
    }
    
}