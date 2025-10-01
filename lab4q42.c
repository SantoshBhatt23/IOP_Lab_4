#include <stdio.h>
int main()
{
    int N , count =1;
    printf("enter a number N : ");
    scanf("%d",&N);
    for(int i =2;i<=N/2;i++)
    {
        if(N%i == 0)
            count +=1;
    }
    if(count==1)
        printf("%d is a prime number",N);
    else
        printf("%d is a composite number",N);

}