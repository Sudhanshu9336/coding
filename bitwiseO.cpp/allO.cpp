#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the first number :"<<endl;
    cin>>a;
    cout<<"enter the secound number :"<<endl;
    cin>>b;
   
    cout<<"output is a&b :"<< (a&b) <<endl;
    cout<<"output is a|b :"<< (a|b) <<endl;
    cout<<"output is ~a :"<< (~a) <<endl;
    cout<<"output is a^b :"<< (a^b) <<endl;
    cout<<"when we shift right operator two times then="<<(a>>2)<<endl;
    cout<<"when we shift right operator one times then="<<(a>>1)<<endl;
    cout<<"when we shift right operator two times then="<<(a<<2)<<endl;
    cout<<"when we shift right operator one times then="<<(a<<1)<<endl;
    return 0;
}
