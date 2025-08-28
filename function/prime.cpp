#include<iostream>
using namespace std;
bool isprime(int n){
    for(int i=2;i<n;i++){
        if(n%2==0){
            return 0;
        }
        else{
            return 1;
        }
    }
}


int main(){
    int n;
    cout<<"enter the number:"<<endl;
    cin>>n;
    int ans=isprime(n);
    cout<<"the number is :"<<ans<<endl;

}