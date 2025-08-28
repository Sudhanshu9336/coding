#include<iostream>
using namespace std;
  struct emploee
 

{
    int eId;
   // char favchar;
    float salary;
};
int main(){
    struct emploee upma;
    upma.eId=1;
     cout<<"the value is  "<<upma.eId<<endl;
    //upma.favchar=  'c';
    upma.salary=10000;
   
   // cout<<"the value is"<upma.favchar<<endl;
    cout<<"the value is  "<<upma.salary<<endl;
    return 0;
}

