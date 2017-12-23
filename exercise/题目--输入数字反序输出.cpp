#include <stdio.h>
void U(int a)
{
	int x=0,b,i,c;
	c=a;
	while(c)
	{c/=10;x++;}
	
	for (b=0,i=0;i<x;i++)
	{b=10*b+a%10;
	a/=10;
	}
    printf ("%d",b);
}
main()
{
	int x=1234567;
	U(x);
}
