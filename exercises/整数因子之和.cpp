#include <stdio.h>
#include <assert.h>

int calculate(int num)
{
	int j=1,sum=0;
	for (; j<num; j++)
	{
		if (num%j==0)	sum=sum+j;
	}
	return sum;
}

int main()
{
	assert(calculate(6) == 6);
	assert(calculate(34) == 20);
	return 0;
}