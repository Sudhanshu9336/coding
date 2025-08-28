#include <stdio.h>
#include <math.h>
int main(){
    int si,ci,p,r,t,a;
    printf("enter the principal");
    scanf("%d",&p);
    printf("enter the rate");
    scanf("%d",&r);
    printf("enter the time");
    scanf("%d",&t);
    si=(p*r*t)/100;
    printf("the simple interest is =%d",si);
    a=p*(pow((1+r/100),t));
    ci=a-p;
    printf("the compound interest is =%d",ci);
    return 0;
}


