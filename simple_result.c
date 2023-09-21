#include <stdio.h>
int main() {
  int eng,math,phy,che,ict,total,stu_id;
  float avg;
  
    printf("Input the ID of Student:");
    scanf("%d",&stu_id);
    printf("Enter the Mark of English:");
    scanf("%d",&eng);
    printf("Enter the Mark of Math:");
    scanf("%d",&math);
    printf("Enter the Mark of Physics:");
    scanf("%d",&phy);
    printf("Enter the Mark of Chemistry:");
    scanf("%d",&che);
    printf("Enter the Mark of ICT:");
    scanf("%d",&ict);
    
  total = eng+math+phy+che+ict;
  avg = total/5;
  
    printf("\nStudent ID:%d",stu_id);
    printf("\nTotal Mark:%d",total);
    printf("\nAvarage Mark:%0.2f",avg);
  
}
