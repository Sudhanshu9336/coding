#include<iostream>
using namespace std;
int main(){
    int n,a,b,c,d,e,h;
     cout<<"enter the ammount:"<<endl;
    cin>>n;
    cout<<"select the option"<<endl;
    cin>>h; 
    switch(h){
        case 1:
        a=n/100;
        b=n/50;
        c=n/20;
        d=n/10;
        e=n/1;
        cout<<"number of 100 note is"<<a<<endl;
        cout<<"number of 50 note is"<<b<<endl;
        cout<<"number of 10 note is"<<d<<endl;
        cout<<"number of 10 note is"<<d<<endl;
        cout<<"number of 1 rupees is"<<e<<endl;
        break;
        default:
        cout<<"inalid case";
    }

}