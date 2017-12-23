# include <stdio.h>
int f(int x)
{
	int i;
	int y=1;
	for (i=1;i<=x;i++)
		y*=10;
	return y;
}


int g(int n)
{
	int i;
	for (i=0;n!=0;i++)
		n/=10;
	printf("有%d位\n",i);
	return i;
}
void main ()
{
	long int n;
	int i,k,N;
	scanf("%ld",&n);
	int j[100]={0};
	N=g(n);
	for (k=1,i=1;k<=N;k++,i++)
	{
		j[i]=n/f(N-k);
		n-=j[k]*f(N-k);
		printf ("%4d",j[i]);
	}
    printf ("\n");
}