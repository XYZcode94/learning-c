#include<stdio.h>
void main(){
    int i=1;
    while(i<=100){
        if(i%2==0){
            printf("even = %d\t",i);
        }
        i++;
    }
}