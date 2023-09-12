#include<stdio.h>

float cost(int distance,int nop)  //nop = number of passengers//

{ float c=distance*10;
   if(distance>55)
   {
   	c=(c+(c*60/100));
   }
   else
   {
   	c=distance*15;
   }
   if (nop>2)
   {
   	c=c+(c*1/100);
   }
   return c;
} 
int main()
{
	float distance;
	int nop;
	printf("Enter distance:");
	scanf("%f",&distance);
	printf("Enter Number of passengers:");
	scanf("%d",&nop);
	float tripcost=cost(distance,nop);
	printf("Cost=%f",tripcost);
	
}
