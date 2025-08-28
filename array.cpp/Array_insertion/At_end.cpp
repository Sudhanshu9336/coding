#include<iostream>
using namespace std;
int main(){
    int n,x;
    int arr[20];
    cout<<"enter the size of an array=";
    cin>>n;
    cout<<"enter the element of an array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"your array is="<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n enter the new element which you want to insert at tha end="<<endl;
    cin>>x;
    if(n>=20){
        cout<<"array is overflow"<<endl;
    }
    else{
        arr[n]=x;

    }
    cout<<"your new array is="<<endl;
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }

} 