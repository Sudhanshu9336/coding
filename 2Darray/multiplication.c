#include<stdio.h>
int main(){
    int arr[20][20],brr[20][20],crr[20][20],r,c;
    printf("enter the row size of 1st matrix:=");
    scanf("%d",&r);
    printf("enter the column size of 1st matrix:=");
    scanf("%d",&c);
    printf("enter the element of 1st matrix=\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
        
    }
    printf(" the element of 1st matrix are=\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    printf("enter the row size of 2st matrix:=");
    scanf("%d",&r);
    printf("enter the column size of 2st matrix:=");
    scanf("%d",&c);
    printf("enter the element of 2st matrix=\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&brr[i][j]);
        }
        
    }
    printf(" the element of 2st matrix are=\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d\t",brr[i][j]);
        }
        printf("\n");
    }
    printf("the sum of these two matrix are=\n");
    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            for(int k=0;k<3;k++)
        crr[i][j]=crr[i][j]+(arr[i][k]*brr[k][j]);
        }
        printf("\n");
    }

}