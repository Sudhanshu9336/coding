#include<iostream>
#include <vector> 
using namespace std;
int main(){
       cout<<"enter the size of an array:";
    int n;
    cin>>n;
 
    vector<int>arr;
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
       arr.push_back(element);
    }
    cout<<"you element are :"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
    
        }
    }
    cout<<"after swapping by bubble sorting :";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}