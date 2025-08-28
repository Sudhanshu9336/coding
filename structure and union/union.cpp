#include<iostream>
using namespace std;
union money
{
    int rice;
    char car;
    float pound;

};
 int main(){
    union money m1;
   m1.rice=89;
   cout<<m1.rice<<endl;
   m1.car='c';
    cout<<m1.car<<endl;
    
 }