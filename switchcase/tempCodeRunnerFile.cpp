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
        cout<<"number of 100 note is"<<a;
        break;
        case 2:
         b=n/50;
        cout<<"number of 50 note is"<<b;
        break;
        case 3:
         c=n/20;
        cout<<"number of 20 note is"<<c;
        break;
        case 4:
         d=n/10;
        cout<<"number of 10 note is"<<d;
        break;
        case 5:
         e=n/1;
        cout<<"number of 1 rupees is"<<e;
        break;

    }

}