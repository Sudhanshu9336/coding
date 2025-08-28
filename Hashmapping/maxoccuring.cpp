#include<iostream>
#include <map>
using namespace std;
class solution{
    public:
    int maxoccuring(string &s){  
          int n=s.size();
                    if(n==0){
                        return 0;
                    }
                    int maxle=-1;
                    for(int i=0;i<n;i++){
                        map<int, int> map;
                         map[255] = 0;
                      for(int j=i;j<n;j++){
                        if(map[s[j]] == 1){
                            break;
                        }
                        map[s[j]]=1;
                        int length = j-i+1;
                        maxle=max(maxle,length); 
                      }
                    }
                    return maxle;    
    }
};
int main(){
    solution obj;
    cout<<"Enter the string"<<endl;
    string s;
    cin>>s;
    int result=obj.maxoccuring(s);
    cout<<result<<endl;
}