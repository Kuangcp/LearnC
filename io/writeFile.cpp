#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp1;
	char ch;
	if ((fp1=fopen("data.ini","a"))==NULL){// 从键盘输入 向文件写入字符以 # 结束运行
		printf ("cannot open file\n");
		exit (0);
	}
	ch=getchar();
	while (ch!='#'){
		fputc(ch,fp1);
		ch=getchar();
	}
	fclose(fp1);
	return 0;
}