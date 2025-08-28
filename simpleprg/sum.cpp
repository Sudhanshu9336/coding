#include<iostream>
using namespace std;
//int sum(int a,int b){
  //  int c=a+b;
  //  return c;
//}
int sum(int a,int b);

int main(){
    int n1,n2;
    cout<<"enter the first number:"<<endl;
    cin>>n1;
     cout<<"enter the secound number:"<<endl;
    cin>>n2;
    cout<<"the sum off two number is :"<<sum(n1,n2);
    return 0;

}
int sum(int a,int b){
    int c=a+b;
    return c;
}