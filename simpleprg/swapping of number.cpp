#include<iostream>
using namespace std;
int main(){
    cout<<"enter the number which you want to reverse "<<endl;
    cin>>n;
    int rev=0;
    int i=0;
    while(n!=0){
        int rem=n%10;
        rev=(rem*pow(10,i))+rev;
        n=n/10;
        i++;
    }
    cout<<"reverse is "<<rev;
}
