#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp1;
	char ch;
	if ((fp1=fopen("a-超市数据.txt","a"))==NULL)//向文件写入字符以#结束
	{
		printf ("cannot open file\n");
		exit (0);
	}
	ch=getchar();
	while (ch!='#')
	{
		fputc(ch,fp1);
		ch=getchar();
	}
	fclose(fp1);
}