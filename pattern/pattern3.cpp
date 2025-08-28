#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<" upma please enter the number :"<<endl;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        //int value=i;
        while(j<=i){
            
            cout<<"*" ;
            //cout<<j;
           //cout<<i;
          // cout<<value;
           //value=value+1;//value++
           
          
            j=j+1;
            
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}
    
    