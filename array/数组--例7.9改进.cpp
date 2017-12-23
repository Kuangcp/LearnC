#include<stdio.h>//该程序作用：输入任意数字以0为终止输入   排序
#define N 100
main()
{
	int i,j,k,t,z=0;
	long int a[N];
	for (i=0;i<N;i++,z++) {scanf("%d",&a[i]);if (a[i]==0) break;}
	for (i=0;i<z;i++)
	{
		k=i;
		for (j=k+1;j<N;j++)//比较k和j两个数，如果j大，把j代表的数给k，并继续与后一位数字进行比较
			if (a[k]<a[j]) k=j;//重复多次后，保证了 k代表的数字 是 数组从i开始到最后 最大的数
		if (k!=i)//把k代表的值给i保证i始终是 数组中 i到最后一个数 中的最大者
		{
			t=a[i];a[i]=a[k];a[k]=t;//把那个大的数字从最初的 j顺序 换成 k顺序 再换成 i顺序
		}//这就完成了从大到小的排序问题
	}
	printf("\n");
	for (i=0;i<z;i++) printf("^^^^%6d  \n",a[i]);
} 