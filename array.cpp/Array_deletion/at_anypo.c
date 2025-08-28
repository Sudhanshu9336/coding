#include <stdio.h>
int main(){
    int arr[20],n,position,data;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("enter the element of an  array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("\n%d",&arr[i]);
    }
    printf("enter the position where you want to delet tha data:\n");
    scanf("%d",&position);
    for(int i=position-1;i<n;i++){
    arr[i]=arr[i+1] ;
    }
    n=n-1;
    printf("your new element of an  array are:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }



}