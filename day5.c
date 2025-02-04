#include<stdio.h>
int main()
    {
     int a, b, temp;
     printf("Enter 5 digit number:");
     scanf("%d",&a);
     temp= 0;
     b= ((a/10000)+2)*10000;
     temp+= b;
     b=(((a/1000)%10)+2)*1000;
     temp+= b;
     b=((((a/100)%100)%10)+2)*100;
     temp+= b;
     b=(((a%100)/10)+2)*10;
     temp+= b;
     b=((a%10)+2);
     temp+= b;
     printf("your number is : %d\n", temp);
     
    }