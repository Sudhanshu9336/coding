#include<iostream>
using namespace std;

    
    
    int power(int a, int b){
        int ans=1;
        for(int i=1;i<=b;i++){
            ans = ans * a;
        }
        return ans;
    }
    int main(){
    int a,b;
    cin>>a;
    cin>>b;
     cout<<"our answer is "<<power(a,b)<<endl;
    int c,d;
    cin>>c;
    cin>>d;
    cout<<"our answer is "<<power(c,d);
    return 0;

}

