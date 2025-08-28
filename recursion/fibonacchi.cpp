#include<iostream>
using namespace std;
int fibo(int n){
    if(n<2){
        return 1;
    }
    return fibo(n-2)+fibo(n-1);
}
6



int main(){
    int n;
    cout<<"enter the number term :"<<endl;
    cin>>n;
    cout<<"the fiboncchi term is  :"<<fibo(n);
    return 0;
}