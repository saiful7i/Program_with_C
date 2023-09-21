#include <stdio.h>

int main() {
  int cust_no, units;
  float unitp;
  float bill;
  
    printf("Consumer ID Number:");
    scanf("%d",&cust_no);
    printf("Consumer Unit:");
    scanf("%d", &units);
    
    if (units>=0 && units <=200){
        bill = units * 0.50;
        unitp = 0.50;
    }
     else if (units>=201 && units <=400){
        bill = (200 * 0.50)+((units-200)*0.65);
        unitp = 0.65;
    }
    else if (units>=401 && units <=600){
        bill = (200 * 0.50)+(200*0.65) * ((units-400)*0.80);
        unitp = 0.80;
    }
     else {
        bill = (200 * 0.50)+(200*0.65)+(200*0.80) * ((units-600)*1.00);
        unitp = 1.00;
    }
    
    printf("\n Account Number of Consumer:%d",cust_no);
    printf("\n Total Power Consume:%d kWh", units);
    printf("\n Price of Per Unit:%0.2f TK", unitp);
    printf("\n Total bill have to pay: %0.2f TK",bill);
}
