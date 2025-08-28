#include<iostream>
using namespace std;
//aasan babut hai man laga kar bus pado tum..

int main(){
    int arr[20],n,position,value;
    cout<<"enter the size of an array:"<<endl;
    cin>>n;
    cout<<"enter the element of an array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"your array is ="<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "<<endl;
    }
    cout<<"enter the position where you want to delete the element:"<<endl;
    cin>>position;
    for(int i=position-1;i<n;i++){
        arr[i]=arr[i+1];
    }
    cout<<"new array is="<<endl;
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" "<<endl;
    }
}