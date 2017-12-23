# include <stdio.h>//输入任意的数字：偶数折半，奇数乘三加一。处理后都能得到1
main()
{
	long int i,a=0,b=0;
	char m;
	
	while (b!=1)
	{
		scanf ("%d",&a);
	while (a!=1)
	{
		if (a%2==0)
		{
		    b=a;
			printf("%d/2=%d\n",b,a=a/2);
		}
		else
		{
			b=a;
			printf("3*%d+1=%d\n",b,a=3*a+1);
		}
	}
		printf ("你想继续吗？终止请输入n \n\n");
		scanf ("%c",&m);
		if (m=='n')  b=1;
	}
}