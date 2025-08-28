#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number:"<<endl;
cin>>n;
switch(n){
    case 5:for(int i=0;i<n;i++){
        if(i==3){
            continue;
        }
        cout<<i<<endl;
        
    }
    break;
    // break is used such that no case is print after this;
    case 2:cout<<"gupta";
    break;
    default:cout<<"Invalid number";
}
}