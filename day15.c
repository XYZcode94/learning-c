#include<stdio.h>
void main(){
    int i=1;
    while(i<=100){
        if(i%2==0 && i%3==0){
            printf("%d is exactly divisible by 6\n",i);
        }
        i++;
    }
} 