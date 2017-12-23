#include<stdio.h>
#define N 100
int data[N][N]={0};
void Full(int number,int begin,int size)
{
	int i,j,k;
	if (size==0) return;
	if (size==1) {data[begin][begin]=number;return;}//Full(1,0,n);
	i=begin;j=begin;//左上角是每一圈数的起点，一圈一圈加起来就是矩阵，每次循环起点加一

	for (k=0;k<size-1;k++)  {data[i][j]=number;number++;i++;}//A    A D D   三阶矩阵区域划分
	for (k=0;k<size-1;k++)  {data[i][j]=number;number++;j++;}//B    A E C   起点是A和E
	for (k=0;k<size-1;k++)  {data[i][j]=number;number++;i--;}//C    B B C
	for (k=0;k<size-1;k++)  {data[i][j]=number;number++;j--;}//D    
	Full(number,begin+1,size-2);//缩减一圈，阶数减去二
	return;
}
void Put(int size)
{
	int i,j;
	for (i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
			printf ("%4d",data[i][j]);
		printf ("\n");
	}
	return;
}
main()
{
	int n;
	printf ("输入阶数");
	scanf("%d",&n);
	Full(1,0,n);
	Put(n);
	return 0;
}
