# include <stdio.h>//水仙花数：各位数字的立方之和等于其本身
bool sxh(int a)//bool类型的函数返回值为逻辑的真假
{
	int i,j,sum=0;
	i=a;
	while (a!=0)
	{
	  j=a%10;
	  sum=sum+j*j*j;
	  a/=10;
	}
	if(sum==i)
		return true;
	else
		return false;
}

main()
{
	int  i,a,b,z[123],m=0;
loop: printf ("请输入数字");
	scanf("%d",&i);
	a=i;
	while (a!=0)
	{
	   z[m]=a%10,a/=10;
	   m++;

	}
end:if (sxh(i))
	{
		printf ("这个数是水仙花数\n");
		for (a=0;a<m;a++)
		printf ("%d*%d*%d\n",z[a],z[a],z[a]);
	}
	else
		printf ("这个数不是水仙花数\n");
    printf ("是否继续");
	scanf("%d",&i);
	if (i) goto loop;
//可以一直输入，直到输入0结束程序

}