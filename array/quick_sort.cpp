#include<stdio.h>
//程序没错误，原理已经清楚了
//指针函数：int *S(int *a,int *b){int k;k=*a,*a=*b,*b=k;return(a,b);}能做到数据交换，注意输入值：地址

void SWAP(int *a,int *b) {int k;k=*a;*a=*b;*b=k;}

void quick (int *Q,int left,int right)//当SWAP更改使用指针，问题得以解决
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
			SWAP(&Q[left_x],&Q[right_x]);//注意取地址
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


int main()
{
	int data[7]={2,3,1,4,9,5,2},i;
	    /*for (i=0;i<7;i++)
		{
			printf("输入数据");
			scanf("%d",&data[i]);
		}*/
	quick(data,0,6);//指定位置进行排序
	quick_all(data,7);//只检查一遍就够了？
	for (i=0;i<7;i++)
		printf ("%2d\n",data[i]);
	return 0;
}

//以下的句子还有问题：
//#define SWAP(a,b) {a+=b,b=a-b,a-=b;}//这个宏定义单独拿出来没问题
//if (left_x!=right_x) SWAP(Q[left_x],Q[right_x]);//为什么当SWAP里的两个数相等就都变成零了？
//int SWAP(int a,int b){int k;k=a,a=b,b=k;return(a,b)}函数:a,b被释放了，这个函数被调用啥都没干!!!!