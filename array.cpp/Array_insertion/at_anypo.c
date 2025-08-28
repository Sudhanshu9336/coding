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
    printf("\nenter the position where you want to add tha data:");
    scanf("%d",&position);
    printf("enter the data to replace that:");
    scanf("%d",&data);
    for(int i=n-1;i>=position-1;i--){
    arr[i+1]=arr[i] ;
    }
    arr[position-1]=data;
    printf("your new element of an  array are:\n");
    for(int i=0;i<=n;i++)
    {
        printf("%d\t",arr[i]);
    }



}