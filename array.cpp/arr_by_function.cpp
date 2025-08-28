 #include<iostream>
 using namespace std;
 // we are calling our function
 void printarray(int arr[],int size){
    for(int i=0;i<size-1;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"printing is done"<<endl;
 }

 int main(){
    int marks[6]={12,45,67,89,99,100};
    printarray(marks,6);
    int roll[10]={1,2,3,4,5,6,7,8,9,10};
    printarray(roll,10);
 }
 