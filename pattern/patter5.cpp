/*#include<iostream>
using namespace std;
int main(){
    char n;
    cout<<"enter the number"<<endl;
    cin>>n;
    char i='a';
    while(i<=n){
        char j='a';
        while(j<=n){
            cout<<i;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;

} */
//             isko aap aise bhi karwa sakte hai///////
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    char i=1;
    while(i<=n){
        char j=1;
        while (j<=n) {
            char ch='A'+i-1;
            cout<<ch;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;

}

