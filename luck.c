#include<stdio.h>
int main()
{
    int i,n,max,min,max_pos,min_pos;
    printf("enter size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d of elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    max_pos=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
    {





    max=arr[i];
    max_pos=i;
        }

    }
    min=arr[0];
    min_pos=0;
        for(i=0;i<n;i++)
        {
            if(arr[i]<min)
        {


        min=arr[i];
        min_pos=i;
        }
         }



        printf("\n largest number:%d",max);
        printf("\n its position:%d",max_pos);
        printf("\n smallest number:%d",min);
        printf("\n its position:%d",min_pos);

    return 0;

}
