#include<stdio.h>
main()
{
	char z;
	while (z!=';')
	{
		scanf("%c",&z);
        if(z<=90&&z>=65)
		{
		  z=z+32;
		}
	    else if(z<=122&&z>=97)
		{
	   	  z=z-32;
		}
		printf("*%c*",z);
	}
}
//循环的使用，以及if表达式的嵌套和字符型数据的读取，运算的关系
//（字符一个一个读取，运算。多出来的做下次输入使用）