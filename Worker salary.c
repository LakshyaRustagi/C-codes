#include<stdio.h>

int main()
{
	char type;
	float days;
	printf("type:");
	scanf("%c",&type);
	printf("days:");
	scanf("%f",&days);
    
    if (type=='F')
    {
    	if(25-days<=1)
    	{ printf("salary=%d",12000);
		}
		else 
		{
		printf("salary=%f",12000-(12000/25)*(25-days));
	    }
	}
		else if (type=='P')
    {
    	if(20-days<=0.5)
    	{ printf("salary=%d",6000);
		}
		else {printf("salary=%f",6000-(6000/20)*(20-days));
		}
	}

}
