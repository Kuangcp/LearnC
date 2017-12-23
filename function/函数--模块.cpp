#include<stdio.h>
float a,b,c;//全局变量

sort()//定义一个用户函数，排序
{
	float t;
	if (a<b)
	{t=a;a=b;b=t;}
	if (b<c)
	{t=b;b=c;c=t;}
	if (a<b)
	{t=a;a=b;b=t;}
}

char grade(float x)//定义一个运算规则 grade（判断等级） 以便下个函数使用;
{
	if (x>=85)
		return ('A');
	else
		if (x>=70)
			return ('B');
		else
			if (x>=60)
				return ('c');
			else 
				return ('D');
}

void putabc()//定义用户函数。以特殊格式输出分数 ，等级
{
	char g;
	g=grade(a);
	printf ("%6.1f:%c",a,g);
	g=grade(b);
	printf ("%6.1f:%c",b,g);
	g=grade(c);
	printf ("%6.1f:%c",c,g);
}

//程序主要部分：
main()
{
	scanf("%f,%f,%f,%f",&a,&b,&c);
	sort();//调用已定义的函数
	putabc();//调用已定义的函数	
}
//模块化的程序
