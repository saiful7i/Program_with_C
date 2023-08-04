#include<stdio.h>
int main()
{
    int a[100],i,n;
    printf("enter linear number:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    int value,pos=-1;
    for(i=0;i<n;i++)
    {
        if(value=a[i]){
            pos=i+1;
            break;
        }
    }
    if(pos==-1){
        printf("not found");
    }
    else {
        printf("%d",pos);
    }

}
