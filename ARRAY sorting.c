#include<stdio.h>
int main()
{
	int i,n,largest,seclargest;
	int a[n];
	scanf("%d",&n);
	
	printf("enter elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	largest=a[0];
	seclargest=a[1];
	for(i=0;i<n;i++)
	{
		if(a[i]>largest){
			seclargest=largest;
			largest=a[i];
		}
		else if(a[i]>largest && a[i]!=largest)
		{
			seclargest=a[i];
		}
	}
	printf("largest = %d , seclargest = %d",largest,seclargest);
}
