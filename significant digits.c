#include<stdio.h>

int main()

{
	int a[10],i,Sum=0;
	printf("Enter number:");
	for(i=0;i<10;i++)
	{ scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		Sum=Sum+a[i];
		
	}
	printf("%d",Sum);
	return(0);
}
