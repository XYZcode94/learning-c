#include<stdio.h>
void main(){
    int i, a, temp=0;
    printf("Enter your no:");
    scanf("%d",&i);
    while(i>0){
        a=i%10;
        temp=temp+a;
        i=i/10;
    }
    printf("sum no:%d",temp);
}