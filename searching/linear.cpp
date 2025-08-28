#include<iostream>
using namespace std;
int main(){
    int n,in;
    int arr[10]={1,33,22,55,44,34,54,65,45,66};
    cout<<"enter the number which you find out the index of that number:="<<endl;
    cin>>n;
    for(int i=0;i<10;i++){
        if(arr[i]==n){
            in=i;
        }
        
    }
    cout<<"index of your number is="<<in;
}