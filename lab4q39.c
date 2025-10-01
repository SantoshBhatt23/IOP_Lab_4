#include <stdio.h>
int main()
{
    int n;
    printf("enter the no of terms: ");
    scanf("%d",&n);
    for(int i =1;i<=n;i++)
    {
        printf("%d/%d!",i,i);
        if(i!=n)
            printf(" + ");
    }
    return 0;
}