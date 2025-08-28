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
cout<<"enter the positon where you want to insert your new value="<<endl;
cin>>position;
cout<<"enter the value ="<<endl;
cin>>value;
for(int i=n-1;i>=position-1;i--){
    arr[i+1]=arr[i];
}
arr[position-1]=value;
cout<<"updated array is="<<endl;
for(int i=0;i<=n;i++){
    cout<<arr[i]<<" ";
}
}