#include<stdio.h>
main()
{
	int a[6][4]={0},b,c=1,d=0,k,i;
	for(i=0;i<6;i++)
	{
		for (b=0;b<4;b++)
		{
			k=c+d;
			c=d;
			d=k;
			a[i][b]=k;
		
		}	
	}
    for(i=0;i<6;i++)
	{
		for (b=0;b<4;b++)
		{
         printf("%9d",a[i][b]);
		}
		printf("\n");
	}
}