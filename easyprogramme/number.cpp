#include<iostream>
using namespace std;
int main(){
    int number,sum=0;
    cout<<"enter the number:";
    cin>>number;
    if(number%2==0){
        cout<<"it is a even number "<<endl;
    }
    else{
        cout<<"it is odd number "<<endl;
    }
    for(int i=1;i<=number;i++){
        cout<<i<<endl;
    }
    cout<<"sum of these number is"<<endl;
    for(int i=1;i<=number;i++){
        sum=sum+i;
            }
            cout<<sum;
}