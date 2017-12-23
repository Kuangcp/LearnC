#include"stdio.h"
main()
{
    int k,j,z,b;
    int i[100]={0},a=0;
    
    for (;a<=100;a++)
  {
     printf("输入数字0结束");
     scanf("%d",&i[a]);
     if (i[a]==0)  break;
	}
	
	for (k=0;k<a;k++)
	{
	     b=k;
     	for (j=k+1;j<a;j++)
            if(i[k]<i[j])    k=j;
         if (b!=k)
         {
             z=i[b],i[b]=i[k];
             i[k]=z;
             }
	printf("***%3d **\n",i[k]);
	}
}

















	