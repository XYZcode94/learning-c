#include<stdio.h>
void main(){
    int n, i=0, j;
    printf("Enter the line print star:");
    scanf("%d",&n);
    while(i<=n){
        j=1;
        while(j<=i){
            printf("*");
            j++;
        }
        i++;
        printf("\n");
    }
}