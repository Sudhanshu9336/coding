#include <iostream>

using namespace std;
int main (){
    int age;
    cout<<"enter the age of a person "<<endl;
    cin>>age;
    if(age>=18){
        cout<<"eligible to vote" ;
    }
    else if(age<18&&age>=10) {
        cout<<"midium mai hai baccha";
    }
    else {
        cout<<"bahut chota hai dudh piyo ja kar";
    }
    return 0;
}
