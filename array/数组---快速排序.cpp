//快速排序：
#include<stdio.h>
#define SWAP(a,b) {a+=b,b=a-b,a-=b;}//这个宏定义是否有问题
void quick (int *Q,int left,int right)
{
	int left_x=left;
	int right_x=right;
	int pivot=Q[(left+right)/2];
	while (left_x<=right_x)
	{
		for(;Q[left_x]<pivot;left_x++);//从左边开始查找
		for(;Q[right_x]>pivot;right_x--);//从右边开始查找
		if (left_x<=right_x)//执行交换
		{
			if (left_x!=right_x) SWAP(Q[left_x],Q[right_x]);//为什么当SWAP里的两个数相等就都变成零了？
			left_x++,right_x--;	
		}
	}
	if (right_x>left)//函数的递归调用
	{
		quick(Q,left,right_x);
	}
	if (left_x<right)//函数的递归调用
	{
		quick(Q,left_x,right);
	}
}
void quick_all(int *Q,int data_size)//检查全局，再次递归调用
{
	quick(Q,0,data_size-1);
}
void main()
{
	int data[7],i;
	    for (i=0;i<7;i++)
		{
			printf("输入数据");
			scanf("%d",&data[i]);
		}
	quick(data,0,6);//指定位置进行排序
	quick_all(data,7);//只检查一遍就够了？
	for (i=0;i<7;i++)
		printf ("%2d\n",data[i]);
}
//程序没错误，原理已经清楚了