#include <stdio.h>

int main(){
    int a,b,swap;
    printf("enter the first number a=");
    scanf("%d",&a);
    printf("enter the secound number b=");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the swapped  number is a=%d",a);
    printf("\nthe swapped number is b=%d",b);


    return 0;
}