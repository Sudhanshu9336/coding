#include<iostream>
using namespace std;
//call by reference using pointer
swapPointer(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
    
}




int main(){
    int x=3,y=4;
    cout<<"the value of x is:"<<x<<endl;
    cout<<"the value of y is:"<<y<<endl;
    swapPointer(&x,&y);
    cout<<"the value of x after swapping is :"<<x<<endl;
    cout<<"the value of y after swapping is :"<<y<<endl;
    return 0;

}