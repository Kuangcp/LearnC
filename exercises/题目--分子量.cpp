#include<stdio.h>
int main()
{	
	int i=0;
	char c,p;
	double sum=0.0,z=0;
	while(1)
	{	
		scanf("%c",&p);
		{   if(p==' ')                  break;
			if(p=='C'||p=='c')		    z=12.01;			
			else if(p=='H'||p=='h')	    z=1.008;			
			else if(p=='O'||p=='o')		z=16.00;			
			else if(p=='N'||p=='n')  	z=14.01;
		}
		scanf("%d",&i);
		sum=sum+z*i;		
	}	
	printf("%.3lfg/mol\n",sum);
} 