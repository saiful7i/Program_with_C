#include<stdio.h>

int main()
{
    int i,j,row;
    printf("Please enter the number of row:");
    scanf("%d",&row);

    for(i=row;i>=0;i--)
    {
        for(j=i;j>=0;j--)
        {
            printf("%4d",j);
        }
        printf("\n");
    }

}
