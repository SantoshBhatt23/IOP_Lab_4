//program to print sum as an individual digit
#include <stdio.h>
int main()
{
    int num , sum=0, d;
    printf("enter the num : ");
    scanf("%d",&num);
    while(num!=0)
    {
        d = num %10;
        sum+= d;
        num /= 10;
    }
    while(sum>9)
    {
        num = sum;
        sum = 0;
        while(num!=0)
        {
            d = num % 10;
            sum += d;
            num /= 10;
        }
    }
    printf("sum = %d",sum);

}