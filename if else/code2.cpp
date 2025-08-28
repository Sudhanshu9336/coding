    #include<iostream>
    using namespace std;
    int main(){
        char z;
        cout<<"enter the alphabet :"<<endl;
        cin>>z;
        if(z>='A' && z<='Z'){
            cout<<"this is a upper case :"<<endl;
        }
         else if(z>='a'&&z<='z'){
            cout<<"this is an lower case :"<<endl;
        }
        else{
            cout<<"enter value is not an alphabet :"<<endl;
        }
        return 0;
    }
