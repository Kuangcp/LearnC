//旷呈平傻逼
#include<stdio.h>//学的好慢，你真当自己学霸了,默默努力，加油。。。
main()
{
	int a[5][5]={0},i,j,k,m,z=0,b[5][5]={0};
//第一部分，二维数组数据输入，输出，注意循环的使用。
	for (i=0;i<5;i++)
	{
		for (j=0;j<5;j++)
		{
			z++;
			a[i][j]=z;
			printf("%3d",a[i][j]);//i,j都应在循环中输出时有确定的值，且小于数组大小

		}
		printf("\n");//换行在最内层循环外
	}
//数组的改变，寻求到规律
//第二部分数组赋值输出
	printf("\n");
	for (m=0;m<5;m++)
	{
		for (k=0;k<5;k++)
		{
			b[m][k]=a[k][m];//书上的精华，对角线不变上下两三角形互换。
			//b[m][k]=a[0][m]+5;自以为是
		    printf("%3d",b[m][k]);
		}
		printf("\n");
	}

}