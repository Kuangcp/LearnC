#include<stdio.h>
#define ROW 5
#define COL 8

int main()
{
	printf("The Fibonacci sequence is below.\n");
	int array[ROW][COL] = {0};
	int b,c = 1,d = 0,k,i;

	for(i = 0; i < ROW; i++)
	{
		for (b = 0; b < COL; b++)
		{
			k = c + d;
			c = d;
			d = k;
			array[i][b] = k;
		}	
	}
    for(i = 0; i < ROW; i++)
	{
		for (b = 0;b < COL; b++)
		{
        	printf("%12d", array[i][b]);
		}
		printf("\n");
	}
	return 0;
}