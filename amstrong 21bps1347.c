#include<stdio.h>
int main()
{
int i,sum=0,x;
printf("Enter number to check");
scanf("%d",&i);
x=i;
while(i>0)
{
sum=sum+(i%10)(i%10)(i%10);
i=i/10;
}
if(x==i)
printf("\n Armstrong number");
else
printf("\n Not Armstrong number");
return 0;
}
