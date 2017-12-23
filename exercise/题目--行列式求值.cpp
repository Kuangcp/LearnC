#include <stdio.h>
const int N=4;
static int n=3;
double a[N][N]={{1,2,3},{1,1,2},{1,1,1}},sum=1; 
//行列式求值：有待解决
void low (double a[N][N])//降阶,因为是二维数组，涉及到二级指针，不能单纯的就用a[][]来传递数组首地址，
{
	int i,j;
	for (i=0;i<n-1;i++)
	    for (j=1;j<n;j++)
		   a[i][j]=a[i+1][j];//行变化
	for (i=0;i<n-1;i++)
	    for (j=0;j<n-1;j++)
		  a[i][j]=a[i][j+1];//列变化
}

double simple (double a[N][N])//化简求值
{
	int i,j;
	double k;
	sum*=a[0][0];
	for (i=1;j<n;j++)
	{
		k=-a[j][0]/a[0][0];
		for (i=0;i<N;i++)
			a[j][i]+=k*a[0][j];
	}
	low (a);
	n--;
	if (n>2) simple(a);
	else return sum*=a[0][0]*a[1][1]-a[0][1]*a[1][0];
}

int main ()
{
	
/////////////////////a[N][N]={{1,2,3};{1,1,2};{1,1,1};{0}};先定义再初始化的话，这样是错误的，定义之后只能通过循环一一赋值，如下：
	//int i,j;
	//for (i=0;i<N;i++)
	//	for (j=0;j<N;j++)
	//		scanf ("%d",a[i][j]);
	simple(a);
	printf ("%lf",sum);
	return 0;
}