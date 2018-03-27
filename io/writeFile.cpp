#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *fp1;
	char ch;
	if ((fp1=fopen("data.ini","a"))==NULL){// 从键盘输入 向文件写入字符以 # 结束运行
		printf ("cannot open file\n");
		exit (0);
	}
	ch=getchar(); // 获取键盘输入的函数
	while (ch!='#'){ // 循环读取输入, 写入文件 直到读取到 # 
		fputc(ch,fp1); // 将上面获取的字符 输出到文件中
		ch=getchar(); // 读取键盘输入
	}
	fclose(fp1); // 关闭文件
	return 0;
}