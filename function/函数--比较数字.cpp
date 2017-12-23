#include <stdio.h>//输入数字以0结束，排序输出

main()
{
    int k,j,z,t;
    int i[100]={0},a=0;
	for (a=0;a<100;a++)
	{
		scanf("%d",&i[a]);
		if (i[a]==0) break;
	}

	 for (k=0;k<a;k++)
	  {
		z=k;
  	    for (j=k+1;j<a;j++)
		{if (i[k]<i[j]) z=j;
		if(z!=k) {t=i[k],i[k]=i[j],i[j]=t;}}
  	    
    	printf("*****%4d  *****\n",i[k]);
	  }
	

	
}