#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *p,t;
	p=(int * )malloc(40*sizeof(int));
	if (!p)
	{
		printf ("\t内存已用完!\t");
		exit (0);
	}
	for (t=0;t<40;++t) *(p+t)=t;//++t和t++在这里没区别
	/*{
		*(p+t)=t;
		printf ("\t%d",*(p+t)); //合并和拆开一样
	}*/
	for (t=0;t<40;++t) printf ("\t%d\n",*(p+t));
	free (p);
}