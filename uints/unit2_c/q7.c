#include<stdio.h>

int main() {
float x,y;

    printf("enter the value of a :");
    scanf("%f",&x);
    printf("enter the value of b :");
    scanf("%f",&y);

    x=x+y;
    y=x-y;
    x=x-y;
    printf("the value of a %d",&x);
    printf("the value of b %d",&y);




}