#include<stdio.h>
void main(){
    int a;
    printf("choose any no frome 1 to 7\n");
    scanf("%d",&a);
    switch(a){
        case 1:
          printf("sunday");
          break;
        case 2:
          printf("monday");
          break;
        case 3:
          printf("tuesdayday");
          break;
        case 4:
          printf("wednesdayday");
          break;
        case 5:
          printf("thrusdayday");
          break;
        case 6:
          printf("friday");
          break;
        case 7:
          printf("saturday");
          break;
        default:
          printf("you choose wrong number");
          break;
    }
}   