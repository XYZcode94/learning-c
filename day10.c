#include<stdio.h>
#include<stdlib.h>
int main(){
    int a, b, c, d, fine;
    printf("Enter number of days book you issued:");
    scanf("%d",&a);
    printf("Enter number of days book you return:");
    scanf("%d",&b);
    fine= abs(b-a);
    if(fine<=5){
        printf("you have fine of 50 paise");
    }else if( fine<=10){
        printf("you have fine of 1 rupees");
    }else if(fine>10 && fine<=30){
        printf("you have fine of 5 rupees");
    } else{
        printf("your membership is cancelled");
    }
}