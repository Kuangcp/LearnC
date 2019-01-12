#include<stdio.h>
#include <stdlib.h>

#define N 30

void show_result(int size); 
void generate_data(int number,int begin,int size);

int data[N][N]={0};

// 生成螺旋矩阵
int main(int argc, char *args[])
{
	int size = 6;
	if (argc == 2)
	{
		size = atoi(args[1]);
	}
	else
	{
		printf("use default size=%d\n", size);
	}
	if(size > N){
		printf("out of size %d\n", N);
		return 0;
	}
	generate_data(1, 0, size);
	show_result(size);
	return 0;
}

void generate_data(int number, int begin, int size)
{
	int i,j,k;
	if (size==0) return;
	if (size==1) {data[begin][begin]=number;return;}//generate_data(1,0,n);
	i=begin;j=begin;//左上角是每一圈数的起点，一圈一圈加起来就是矩阵，每次循环起点加一

	for (k=0;k<size-1;k++)  {data[i][j]=number;number++;i++;}//A    A D D   三阶矩阵区域划分
	for (k=0;k<size-1;k++)  {data[i][j]=number;number++;j++;}//B    A E C   起点是A和E
	for (k=0;k<size-1;k++)  {data[i][j]=number;number++;i--;}//C    B B C
	for (k=0;k<size-1;k++)  {data[i][j]=number;number++;j--;}//D    
	generate_data(number,begin+1,size-2);//缩减一圈，阶数减去二
	return;
}

void show_result(int size)
{
	int i,j;
	for (i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
			printf ("%3d",data[i][j]);
		printf ("\n");
	}
	return;
}