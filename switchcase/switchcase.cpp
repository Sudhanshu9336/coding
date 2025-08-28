#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number:"<<endl;
cin>>n;
switch(n){
    case 1:cout<<"my name is sudhanshu:";
    break;
    // break is used such that no case is print after this;
    case 2:cout<<"gupta";
    break;
    default:cout<<"Invalid number";
}
}