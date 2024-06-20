#include <stdio.h>

int main () {

printf("enter a number");
float x;
scanf("%f",&x);
if ((x*-1 )<0)
{
 printf("even number");
}
else if ((x*-1) > 0)
{
    printf("the number is odd");

}
else 
 printf("you enter zero ");

}