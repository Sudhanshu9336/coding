#include<iostream>
using namespace std;
void updatearray(int array[] , int n){
    //updatting array
    array[0]=50;
    cout<<"printing update array"<<endl;
     for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
cout<<" "<<endl;
}

int main(){
    int array[5]={1,2,3,4,5};
    updatearray(array,5);
    cout<<"Printing main function"<<endl;
    for(int i=0;i<5;i++){
        cout<<array[i]<<" ";
    }
    /*dekhe sath sath mai apka main function mai bhi change ho gya 
    kyuki aap array ka adress pass karte hai na ki dabba
    */
}