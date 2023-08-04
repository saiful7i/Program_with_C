#include <stdio.h>
int main()
{
    int x,y;
    printf("Please input the value of x & y:");

    scanf("%d%d",&x,&y);
    printf("\nResult of x>a:%d",x>y);
    printf("\nResult of x<a:%d",x<y);
    printf("\nResult of x<=a:%d",x<=y);
    printf("\nResult of x>=a:%d",x>=y);
    printf("\nResult of x==a:%d",x==y);
    printf("\nResult of x!=a:%d",x!=y);
    return 0;
}
