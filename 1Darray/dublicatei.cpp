#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of test cases: ";
    cin>>n;
    cout<<endl;
    for(int i=0;i<n;i++){
        int m;
        cout<<"Enter the size of array: ";
        cin>>m;
        cout<<endl;
        vector<int>arr(m);
       for(int i=0;i<m;i++){
            cin>>arr[i];
        }
        cout<<endl;
        sort(arr.begin(),arr.end());
        int k=0;
        while(k<m-1){
            if(arr[k]!=arr[k+1]){
                cout<<arr[k];
                cout<<" ";
                k++;
            }
            else{
                k++;
            }

        }
        cout<<arr[m-1];
        cout<<endl;
    }
return 0;
}