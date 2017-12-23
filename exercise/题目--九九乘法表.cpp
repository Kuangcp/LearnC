#include<stdio.h>//九九乘法表
main()
{
	int a,b;
	for (a=1;a<=9;a++)
	{
		for (b=1;b<10;b++)
		{
			if(a<b) continue;
			printf("%2d*%d=%-2d",a,b,a*b);
			}
		printf("\n");
	}
}

