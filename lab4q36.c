//program to print 1,3,5,7,9,......N terms .....
#include <stdio.h>
int main()
{   
    int n , v=1;
    printf("please enter the number of terms....");
    scanf("%d",&n);
    for ( int i =1;i<=n;i++)
    {
        printf("%d\t",v);
        v+=2;
    }
    return 0;
}