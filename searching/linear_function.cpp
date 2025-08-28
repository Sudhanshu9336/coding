#include<iostream>
using namespace std;
bool search(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    
    }
    return 0;
}


int main(){
    int key;
    int arr[10]={-3,5,3,6,8,23,45,-7,45,22};
    cout<<"enter the key that you want to found"<<endl;
    cin>>key;
    bool found=search(arr,10,key);
    if(found){
        cout<<"key is present in our array:"<<endl;
    }
    else{
        cout<<"key is not present:"<<endl;
    }
}

    
