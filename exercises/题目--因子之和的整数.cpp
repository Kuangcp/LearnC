#include<stdio.h>//从1到输入的那个数字中所有的完数（因子之和等于自身）
main()
{			
	int i,a,sum,z;
	printf ("请输入一个数字");
	scanf("%d",&z);
	for(i=1;i<z;i++)
	{
		for (a=1,sum=0;a<i;a++)
		{
			if (i%a==0)
				sum=sum+a;
		}
		if (sum==i)
			printf("%d是完数\n",i);
	}
}
//整个循环的终止条件，也就是判断语句的选择十分重要