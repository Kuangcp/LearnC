#include"stdio.h"
main()
{
	int i=1,j,k,sum;
	while(i)
	{
	scanf("%d",&i);
	for (j=1,sum=0;j<i;j++)
	if (i%j==0)	sum=sum+j;
	if (sum==i) 
	printf("perfect\n");
	if (sum<i)
	 printf("xiao\n");
	if (sum>i)
	 printf("da\n");
	}
	
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	