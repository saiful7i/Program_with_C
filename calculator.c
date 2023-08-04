//calculator
#include<stdio.h>
#include<math.h>

int e;
float a,b,c;


    int main()
    {

    start:
    printf("\nEnter your choice:\n1.Addition \n2.Subtraction \n3.Multiplication \n4.Divition \n5.Squar Root \n6.Exit\n");
    scanf("%d",&e);
    switch(e)
     {

           case 1:
            printf("\nEnter Two Value:\n");
            scanf("%f%f",&a,&b);
            c=a+b;
            printf("\nAddition result:%0.2f",c);
            break;
             case 2:
            printf("\nEnter Two Value:\n");
            scanf("%f%f",&a,&b);
            c=a-b;
            printf("\nSubtraction result:%0.2f",c);
            break;
             case 3:
            printf("\nEnter Two Value:\n");
            scanf("%f%f",&a,&b);
            c=a*b;
            printf("\nMultiplication result:%f",c);
            break;
             case 4:
            printf("\nEnter Two Value:\n");
            scanf("%f%f",&a,&b);
            c=a/b;
            printf("\nDivition result:%f",c);
            break;
             case 5:
            printf("\nEnter a Value:\n");
            scanf("%f",&a);
            c=sqrt(a);
            printf("\nSquar Root result:%0.2f",c);
            break;
            default:
                return 0;
     }
     goto start;
    return 0;
}

