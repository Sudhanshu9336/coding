#include <stdio.h>90
int main(){
    int a,b,c,d,e,sum=0,per;
    printf("enter the marks of math= ");
    scanf("%d",&a);
    printf("enter the marks of physic=");
    scanf("%d",&b);
    printf("enter the marks of chemistry=");
    scanf("%d",&c);
    printf("enter the marks of hindi=");
    scanf("%d",&d);
    printf("enter the marks of computer=");
    scanf("%d",&e);
    sum=(a+b+c+d+e);
    printf("the sum of five subject is =%d",sum);
    per=(sum/5);
    printf("\nther percentage of its mark is=%d",per);
    return 0;



}