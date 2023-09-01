#include<stdio.h>

int main()
{
int var=34;
int *p;
p=&var;
printf("The value of var: %d",var);
printf("\nThe address of var: %p",&var);
printf("\nThe value of var: %d",*p);
printf("\nThe address of var: %p",p);
}
