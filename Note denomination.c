#include<stdio.h>

struct note_denomination{
	int Amount;
};
int main()
{
	struct note_denomination n;
	
	int note500, note100, note50, note20, note10, note5, note2, note1;
	note500 = note100 = note50 = note20 = note10 = note5 = note2 = note1 = 0;

  	
  	scanf("%d",&n.Amount);
  
  	if (n.Amount > 500)
  	{
  		note500 = n.Amount / 500;
  		n.Amount = n.Amount - (note500 * 500);	
  	} 
  	if (n.Amount >= 100)
  	{
  		note100 = n.Amount / 100;
  		n.Amount = n.Amount - (note100 * 100);	
  	}
  	if (n.Amount >= 50)
  	{
  		note50 = n.Amount / 50;
  		n.Amount = n.Amount - (note50 * 50);	
  	}
  	if (n.Amount >= 20)
  	{
  		note20 = n.Amount / 20;
  		n.Amount = n.Amount - (note20 * 20); 	
  	}
	if (n.Amount >= 10)
  	{
  		note10 = n.Amount / 10;
  		n.Amount = n.Amount - (note10 * 10); 	
  	} 
  	if (n.Amount >= 5)
  	{
  		note5 = n.Amount / 5;
  		n.Amount = n.Amount - (note5 * 5); 	
  	}
   	if (n.Amount >= 2)
  	{
  		note2 = n.Amount / 2;
  		n.Amount = n.Amount - (note2 * 2); 	
  	} 	 	      	
  	if (n.Amount >= 1)
  	{
	   	note1 = n.Amount;
	}
	printf("\n500 = %d\n", note500); 
	printf("\n100 = %d\n", note100); 
	printf("\n50 = %d\n", note50); 
	printf("\n20 = %d\n", note20); 
	printf("\n10 = %d\n", note10); 
	printf("\n5 = %d\n", note5); 
	printf("\n2 = %d\n", note2); 
	printf("\n1 = %d\n", note1); 
	
  	return (0);
}
