// 1,4,9,16,25.....
#include <stdio.h>
int main()
{
    int d =3, a=1, nt, n, pt;
    printf("enter the num of terms: ");
    scanf("%d",&n);
    pt = a;
    printf("%d\t",a);
    for(int i =1 ; i<=n-1;i++)
    {
        nt = pt + d;
        printf("%d\t",nt);
        d+=2;
        pt = nt;
    }
    return 0;
}