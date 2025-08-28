#include<stdio.h>
int main(){
    char ch='one';
    for(int i=1;i<10;i++){
        printf("%c",ch);
        ch=ch++;
    }
}