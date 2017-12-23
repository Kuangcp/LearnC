#include "stdio.h"
int jju(int c,int a)
{
    int t;
    if (c<a) {t=c,c=a,a=t;}
    return c;
    }
    //前半部分
main()
{
    int k,j,z,b;
    int i[20]={0},a=0;
    while (i[a-1]!=-1)
  {
     scanf("%d",&i[a]);
     a++;
	}
	for (b=0,k=0;k<a;b++,k++)
	{
  	for (j=1;j<a;j++)
  	i[b]=jju(i[k],i[j]);
  	
	printf("%3d",i[b]);
	}
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	