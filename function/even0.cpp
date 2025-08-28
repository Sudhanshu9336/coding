#include<iostream>
using namespace std;

int check(int a){
    if(a%2!=0){
        return 0;
    }
    else{ return 1;
    }
}


int main(){
    int num;
    cout<<"enter your number:"<<endl;
    cin>>num;
    int ans=check(num);
    cout<<"number is "<<ans;

}