//一百块钱，买一百只鸡。公鸡：5元 母鸡：3 小鸡：一块3只
#include<stdio.h>
int main()
{
	int a,b,c;
	a=1,b=1,c=3;
	for(c=3;c<100;c=c+3)
	{
		for(a=1;a<20;a++) 
		{
			for(b=1;b<33;b++)
			{
				if ((5*a+3*b+c/3==100) && (a+b+c==100))
				{
					printf("公鸡有 %-2d 只母鸡有 %-2d 只小鸡有 %-2d 只\n",a,b,c); 
				}
			}
		}
	}
	return 0;
}