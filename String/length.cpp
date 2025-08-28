#include<iostream>
using namespace std;
void rev(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
}
int getlength(char name[]){
    int cout=0;
    for(int i=0;name[i] !='\0';i++){
        cout++;
    }
    return cout;
}
int main(){
    char name[20];
    cout<<"enter your name"<<endl;
    cin>>name;
    cout<<"your name is ";
    cout<<name<<endl;
    int len=getlength(name);
    cout<<"length of string is:"<<len<<endl;
    rev(name,len);
    cout<<"your name is ";
    cout<<name<<endl;
    
}