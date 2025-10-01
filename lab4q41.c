//program to print factors of a given number..
#include <stdio.h>
int main()
{
    int N;
    printf("enter a number : ");
    scanf("%d",&N);
    printf("factors of the number %d are \n",N);
    for(int i =1;i<=N;i++)
    {
        if(N%i==0)
            printf("%d\t",i);
    }
}