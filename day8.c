#include<stdio.h>
int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if(year%4==0&&(year%400||year%100)){
        printf("year is leap year");
    }else{
        printf("year is not leap year");
    }
}