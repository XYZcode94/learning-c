#include<stdio.h>
int main(){
    int amount, nohun, nofifty, noten, a;
    printf("Enter the amount withdrawl:");
    scanf("%d",&amount);
     a= amount%10;
    if(a==0){
    nohun= amount/100;
    amount= amount%100;
    nofifty= amount/50;
    amount= amount%50;
    noten=amount/10;
    printf("number of hundred rupees notes = %d\n",nohun);
    printf("number od fifty rupees notes = %d\n",nofifty);
    printf("number od ten rupees notes = %d\n",noten);
    }else{
        printf("please Enter multiple of 10 or 50 or 100 notes only.");
    }
    return 0;
}