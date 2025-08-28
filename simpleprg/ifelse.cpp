#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"tell me your age:"<<endl;
    cin>>age;
    if(age>18){
        cout<<"eligible to vote";
    }
    else if  (age<18){
        cout<<"not eligible to vote";
    }
    else {
        cout<<"kuch na karo";
    }

    return 0;

}