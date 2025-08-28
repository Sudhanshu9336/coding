#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
vector<int> sum(int a,int b){
        vector<int>result;
        result.push_back(a);
        result.push_back(b);
        return result;
    }
};

    int main(){
        cout<<"enter the first element :"<<endl;
        int n;
        cin>>n;
        cout<<endl;
        cout<<"ente the secound element :"<<endl;
        int m;
        cin>>m;
    
        cout<<endl;
        solution sol;
        vector<int>ans=sol.sum(n,m);
        cout<<"the sumation of the two number is:";
        for(auto it:ans){
            cout<<it<<" ";
        }
        return 0;


    }
