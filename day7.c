#include<stdio.h>
float main()
    {
        float a, b ,amount;
        printf("Enter the cost price of product:");
        scanf("%f",&a);
        printf("Enter the selling price of product:");
        scanf("%f",&b);
        if(a>b)
        {
            printf("you have loss\n");
            amount= a-b;
            printf("amount = %f",amount);
        }else{
            printf("you have profit\n");
            amount= b-a;
            printf("amount = %f",amount);
        }
    }