#include<iostream>
using namespace std;
int main(){
    int arr1[10]={1,2,3,4,5,6,7,8,9,23};
    int arr2[5]={2,33,44,7,43};
    for(int i=0;i<=10;i++){
        int element=arr1[i];
        for(int j=1;j<=5;j++){
            if(element==arr2[j]){
                arr2[j]=-12234;
                cout<<element<<endl;
            }
        }
    }
}