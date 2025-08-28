#include<iostream>
using namespace std;
int factorial(int num){
    int fact=1;
    for(int i=1;i<=num;i++){
        fact=fact*i;
    }
    return fact;
}
int nCr(int n,int r){
int numerator=factorial(n);
int dem=factorial(n-r)*factorial(r);
int rem=numerator/dem;
return rem;
}
int main(){
    int n,r;
    cout<<"enter the value of n="<<endl;
    cin>>n;
    cout<<"enter the value of r="<<endl;
    cin>>r;
    int ans=nCr(n,r);
    cout<<"your combination is "<<ans;
}