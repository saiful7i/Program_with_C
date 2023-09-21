#include <stdio.h>
int addNumbers(int a, int b);         
int main()
{
    int n1,n2,sum;

    printf("Enters 1st numbers: ");
    scanf("%d",&n1);
    printf("Enters 2nd numbers: ");
    scanf("%d",&n2);

    sum = addNumbers(n1, n2);        
    printf("sum = %d",sum);

    return 0;
}
int addNumbers(int a, int b)         
{
    int result;
    result = a+b;
    return result;                 
}
