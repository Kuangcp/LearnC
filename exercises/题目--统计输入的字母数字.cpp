#include<stdio.h>
main()
{
	int b=0,c=0;
	printf("请输入字符");
	char a;
	for(;1;)
	{
		
		//scanf("%c",&a);
		//二者输入方式一样
		
		a=getchar();
		if(a=='*')
			break;
		if(a<=90&&a>=65||a>=97&&a<=122)
			b++;
		else if(a<=57&&a>=48)
			c++;
	}
	printf("有%d个字母\n",b);
	printf("有%d个数字\n",c);
}
//在循环中的选择语句，用一个嵌套才可以，因为字符一次输入太多，要一个一个的处理