#include<iostream>
using namespace std;
int main(){
    int n=5;
    cout<<n<<endl;
    cout<<"address of my number is "<<&n<<endl;
    int *ptr=&n;
       cout<<"address of my number is by using pointer is "<<ptr<<endl;
       cout<<"value of a using pointer is "<<(*ptr*2)<<endl;
   char ch='a';
   cout<<&ch<<endl;
   char *chat=&ch;
   cout<<"adress of character is "<<chat;
   //copying a pointer
   int *q=ptr;
   cout<<ptr <<"  "<<q<<endl;
int i=3;
int *t=&i; 
//post increment
cout<<(*t)++<<endl;
cout<<t<<endl;
cout<<t+1<<endl;

}