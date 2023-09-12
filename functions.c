#include<stdio.h>


void main()
{
	int x,y;
	void add(int,int);
	printf("Enter the numbers:");
	scanf("%d%d",&x,&y);
	add(x,y);
}
add(int a,int b){

int c;
c=a+b;
printf("%d:",c);
}
