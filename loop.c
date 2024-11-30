#include<stdio.h>
#include<conio.h>

void main(){
    int i , even=0 ,odd=0;
    for(i=1;i<=50;i=i+2){
        if(i%2==0){
            printf("%d",i);
            even=even+i;
        }
        else
        {
            printf("%d",i);
            odd=odd+i;
        }
    }
    return 0;
}