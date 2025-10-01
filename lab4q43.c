//program to print commission
#include <stdio.h>
int main()
{
    int sales;
    float com;
    printf("enter sales amount : ");
    scanf("%d",&sales);
    if(sales<=500)
        com= 0.05*sales;
    else if(sales <=2000)
        com = 35 + 0.1*(sales -500);
    else if(sales <= 5000)
        com = 185 + 0.12*(sales-2000);
    else if(sales>5000)
        com = 0.125*sales;
    printf("commision amount = %.2f",com); 
}