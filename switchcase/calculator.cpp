#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    char ch;
    cout<<"enter the first number:"<<endl;
    cin>>a;
    cout<<"enter the secound number:"<<endl;
    cin>>b;
    cout<<"select the operator 1=+;2=*,3=-"<<endl;
    cin>>ch;
    
    switch(ch){
        case '1':
        cout<<"sum of two number is:";
        c=a+b;
        cout<<c;
        break;
        case '2':
        cout<<"multipication of two number is:";
        c=a*b;
        cout<<c;
        break;
        case '3':
        cout<<"substraction of two number is :";
        c=a-b;
        cout<<c;
        break;
        default :
        cout<<"invalid case";
    }

}