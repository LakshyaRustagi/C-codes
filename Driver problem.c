#include<stdio.h>

int main()
{
	char sex,ms;
	int age;
	printf("Enter age,sex and martial status:");
	scanf("%d%c%c",&age,&sex,&ms);
	if ((ms=='m')||(ms=='u'&&sex=='m'&&age>30)||(ms=='u'&&sex=='f'&&age>25))
	{
		printf("The driver is insured");
	}
     else
     { printf("The driver is uninsured");
	 }   return(0);
}
