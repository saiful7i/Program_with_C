#include<stdio.h>

int main ()
{
    int i,n,sum=0;
    printf("Enter n");
    scanf("%d",&n);
    for (i=1;i<=n;i=i+2)
    {
        sum=sum+i;
    }
    printf("sum=%d",sum);
}
