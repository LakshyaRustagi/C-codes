#include<stdio.h>



int main()
{
int n=5;
int arr[n];
int i,j;
for(i=0;i<n;i++)
{
scanf("%d",&j);
arr[i]=j;
}
for(i=0;i<n/2;i++)
{
int temp;
temp = arr[i];
arr[i] = arr[n-i-1];
arr[n-i-1] = temp;
}
for(i=0;i<n;i++)
{
printf("%d ",arr[i]);
}
}
