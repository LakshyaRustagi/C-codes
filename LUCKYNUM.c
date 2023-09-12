#include<stdio.h>

int main(){
	
	int dob,m,n,p,q;
	int i;
	int sum=0;
	int sum1[10];
	int luckynum=0;
	int arr[8];
	printf("Enter dob : ");
	scanf("%d",&dob);
	for(i=0;i<7;i++)
	{
	 m=dob%10;
	 arr[i]=m;
	 dob=dob/10;	
	}
	for(i=0;i<7;i++)
	{
		sum+=arr[i];	
	}
	printf("%d\n",sum);
	for(i=0;i<3;i++)
	{ p=sum%10;
	sum1[i]=p;
	sum=sum/10;
	}
	for(i=0;i<4;i++)
	{
		luckynum+=sum1[i];
		
	}
	printf("Luckynumber is %d",luckynum);
	
}
