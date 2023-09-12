#include<stdio.h>

int main()
{
int age;
scanf("%d",&age);
if(age<=21){
	printf("you can drink,");
	{
		if(age<=18){
			printf("Teen");
		}
	
		else{
			printf("You are small");
		}
	}
}
	else {
		printf("Not small");
	}
}
