#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number:"<<endl;
    cin>>n;
    int i=2;
    /*jaise humne liya 7 ye prime tabhi hoga jub ye 2 se 6 tak kisi se divide na __ho
    yadi ye kisi se bhi divide hota hai to oh not prime hoga uske is_literal_type*/
    while(i<n){
        if(n%i==0){
            cout<<"not prime for"<<  i  <<endl;
        }
        else{
            cout<<"prime for "<<  i  <<endl;
        }
        i=i+1;

    }
    return 0;

}