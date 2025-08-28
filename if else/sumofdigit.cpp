#include<iostream>
using namespace std;
int main(){
    int n=234,pro=1,sum=0,rem,sub;
    
   
     while(n>0){
       rem=n%10;
       pro=pro*rem;
        sum=sum+rem;
        n=n/10;
    }
     cout
    <<"the sum of its digit is ="<<sum<<endl;
    cout<<"the product of its digit is ="<<pro<<endl;
    sub=pro-sum;
    cout<<"the sub of both digit is ="<<sub<<endl;

}
   
