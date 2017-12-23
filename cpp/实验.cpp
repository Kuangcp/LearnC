#include<stdio.h>//n元素围成圈，每b个退出一个，留下唯一一个数
int tt(int n,int b)
{
	int m=0,i,k,j,a[100]={0};
	while (1)
	{
		a[m]=1;
		if (m>n) m=b-n%b;
		else m=m+b;
		for (i=0;i<n;i++)
			if (a[i]=0){k++;j=i;}
		if (k=1) return j;
	}

}
void main ()
{
	int n=29,b=4;
	printf ("是第%d个\n",tt(n,b));
}



