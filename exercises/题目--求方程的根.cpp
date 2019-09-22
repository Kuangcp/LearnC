#include<stdio.h>
main()
{
	int i,f1,f2,a;
	for (i=-10;i<=10;i++)
	{
		f1=i*i-7;
		if (f1==0)
			printf("零点是%d\n",i);
		else
		{
			for (a=i+1;a<=10;a++)
			{
		    	f2=a*a-7;
				if (f2==0) 
					printf("零点是%d\n",a);
		        else 
					if (f1*f2<0)
				    	printf("零点在(%d,%d)上\n",i,a);break;
			}
		}

	}
}