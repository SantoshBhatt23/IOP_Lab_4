#include <stdio.h>
int main()
{
    int units;
    float amount;
    printf("eter your consumed units : ");
    scanf("%d",&units);
    if(units>=0 && units<=200)
        amount = 0.50*units;
    else if(units <=400)
        amount = 100 + 0.65*(units-200);
    else if(units <=600)
        amount = 230 + 0.80*(units-400);
    else if(units>600)
        amount = 425 + 1.25*(units - 600);
    else
        printf("invalid entry");
    printf("the total amount you have to pay = %.2f",amount);
}