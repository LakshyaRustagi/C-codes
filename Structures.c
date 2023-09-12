#include<stdio.h>

struct employee {
char name[40]; int empid; float salary;

}; 
int main()
{


struct employee emp;

scanf("%s ",emp.name); 
printf("%s ",emp.name); 
scanf("%d" , &emp.empid); 
printf("%d ",emp.empid);

scanf("%f",&emp.salary); 
printf("%f\n",emp.salary);

return 0;
}
