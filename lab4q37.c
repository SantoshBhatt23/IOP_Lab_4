// to print pattern..2,4,6,8,.....Nterms...
#include <stdio.h>
int main()
{
    int n,v=2;
    printf("enter the value of n: ");
    scanf("%d",&n);
    for (int i =1;i<=n;i++)
    {
        printf("%d\t",v);
        v+=2;
    }
    return 0;
}