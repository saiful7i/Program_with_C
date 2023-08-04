#include<stdio.h>
int main()
{
    int A[10]={2,4,6,8,12,3,5,7,9};
    int key;
    int found=0;//Flag to track if key is found

    printf("Enter a key element ");
    scanf("%d",&key);

    for(i=0;i<10;i++)
    {
        if(key==A[i])
        {
            found=1;
            breck;
        }
    }

    if(found)
    {
        printf("The key elements is fouhnd");

    }
    else
    {
        printf("The key elements is not found");

    }
    return 0;
}
