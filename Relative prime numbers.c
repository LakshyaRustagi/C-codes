//program for checking any two numbers as relatively prime

#include <stdio.h>
int main()
{
        int n1,n2,i,hcf;
        scanf("%d%d",&n1,&n2);
        for(i=1;i<=n1;i++)
        {
                if(n1%i==0 && n2%i==0)
                {
                        hcf=i;
                }
        }
        if(hcf==1)
        {
                printf("Relatively Prime");
        }
        else
        {
                printf("Not relatively prime.");
        }
        return 0;
    }

