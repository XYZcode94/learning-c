#include<stdio.h>
void main(){
    float x, m, cm, inch;
    printf("Enter the distance b|w two cities (in km): ");
    scanf("%f",&x);
    m=x*1000;
    cm=m*100;
    inch=cm*0.393701;
    printf("the distance b|w two cities in km:\n", x);
    printf("the distance b|w two cities in m:\n", m);
    printf("the distance b|w two cities in cm:\n", cm);
    printf("the distance b|w two cities in inch:\n", inch);
}