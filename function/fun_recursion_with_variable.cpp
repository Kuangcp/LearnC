#include<stdio.h>
int sum=0,ww=1;
int fun(int a)
{

	sum = sum + a;
	ww=ww*a;//添加程序段，88没变
	a--;//驱动
	printf ("%d\t%d\t%d\n",&a,&sum,&ww);//每次函数递归调用，a的地址向上推进88个字节
	if (a==0) return (sum,ww);//return可以返回多个变量
	else fun(a);//递归函数调用
}
int main ()
{
	int b=8,v=0;
	v=fun(b);
	printf ("%d\n",v);
	return 0;
}
//由输出结果可知，全局变量ww，sum地址固定不会变且存储位置相邻，和变量a地址相距很远
//可以知道，函数内 形参a的地址在递归函数调用时不断在变动
