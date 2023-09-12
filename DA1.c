#include<stdio.h>

struct date
{
int day;
int month;
int year;
 
};
int main() 
{
struct date D1,D2; //D1 & D2 are dates
printf("Enter first date(dd/mm/yyyy):");
scanf("%d%d%d",&D1.day,&D1.month,&D1.year);
printf("Enter second date(dd/mm/yyyy):");
scanf("%d%d%d",&D2.day,&D2.month,&D2.year);

if ((D1.day==D2.day)&&(D1.month==D2.month)&&(D1.year==D2.year))
{
	
printf("EQUAL");

}
else
{
	
printf("UNEQUAL"); 

} return(0);
}
