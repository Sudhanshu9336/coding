#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"upma please enter the  number:"<<endl;
    cin>>n;
    int i=2;
    while(i<=n){
        sum=sum+i;
        i=i+2;
    }
    cout<<"the sum of the even number from 2 to n is :"<<sum;
        
    return 0;

}