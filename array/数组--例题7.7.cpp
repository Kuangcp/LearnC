#include<stdio.h>
main()
{
	int i,k;
	int  a[4][4]={{1,2,3,4},{5,6,7,8},{4,3,2,1},{1,2,3,4}};
	for (i=0;i<4;i++)
		for(k=0;k<i;k++)
		{
			if (a[i][k]>a[k][i])
				a[k][i]=a[i][k];//沿对角线进行比较，使得上面三角形数字大于下面的数字
		}

    for (i=0;i<4;i++)
	{
		printf("\n");
		for (k=0;k<4;k++)
			if (k>=i)  printf("%6d",a[i][k]);//这k>=i为了控制输出一个倒立三角形*变量随变量而变化*，须多加注意
			else printf("%6c",' ');
		printf("\n");
	}

}