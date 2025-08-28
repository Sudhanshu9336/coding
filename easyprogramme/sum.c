#include <stdio.h>
int main(){
    int n,sum=0;
    printf("enter the number to find its upto its sum:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("the sum is =%d",sum);
     return 0;



}
