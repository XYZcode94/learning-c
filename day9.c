#include<stdio.h>
int main(){
    int a, b, c;
    printf("Enter your 1st angle: ");
    scanf("%d", &a);
    printf("Enter your 2nd angle: ");
    scanf("%d", &b);
    printf("Enter your 3rd angle: ");
    scanf("%d", &c);
    if(a + b + c == 180){
        printf("The given angles form a valid triangle.");
    } else {
        printf("The given angles do not form a valid triangle.");
    }
}