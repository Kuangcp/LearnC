#include<stdio.h>
main()
{
	int z,a,b,sum=0;
	scanf("%d",&a);
	z=a;
	while(a!=0)
	{
		b=a%10;
		sum=sum+b*b*b;
		a=a/10;
	}
	if(sum==z)
		printf("这个数是水仙花数");
	else
        printf("这个数不是水仙花数");
}