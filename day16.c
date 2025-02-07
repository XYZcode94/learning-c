#include<stdio.h>
void main(){
    int i=1, n, fact=1;
    printf("Enter your no:");
    scanf("%d",&n);
    while(i<=n){
        fact= fact*i;
        i++; 
    }
    printf("factriol= %d",fact);
    
}