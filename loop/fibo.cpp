
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number :"<<endl;
    cin>>n;
    int a=0;
    int b=1;
    cout<<a<<" ";
    cout<<b<<" ";
    for(int i=1;i<=n;i++){
        int num=a+b;
        cout<<num<<" ";
        a=b;
        b=num;

    }
    return 0;
}