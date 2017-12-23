#include<stdio.h>//贪心法：把一个复杂问题分解为一系列较为简单的局部最优选择
int CommonFactor(int m,int n)//求最大公约数
{
	int r=m%n;
	while(r!=0)
	{
		m=n,n=r,r=m%n;
	}
	return n;
}
void EgyptFraction(int A,int B)
{
	int E,R;
	printf ("%d/%d\n",A,B);
	while(A>1)
	{
		E=B/A+1;
		printf ("1/%d+",E);//E就是局部最优选择
		A=A*E-B;
		B=B*E;
		R=CommonFactor(B,A);
		if (R>1) A=A/R,B=B/R;
	}
	printf ("1/%d\n",B);
	return;
}

int main()
{
	int A,B;
	printf ("请输入分数分子，分母\n");
	scanf("%d,%d",&A,&B);
	EgyptFraction(A,B);
	return 0;
}