#include<stdio.h>
#include<stdlib.h> // 文件操作需要引入的头文件
int main(){
	FILE *fp; // 定义文件指针, 
	char ch;
	if ((fp=fopen("data.ini","r"))==NULL){// 以只读的方式打开文件, 如果文件不存在就提示并退出
		printf ("this file cannot opened\n");
		exit(1);
	}
	while ((ch=fgetc(fp))!=EOF){ // 循环输出文件内容, 直到读到了文件的结束符,
		fputc(ch,stdout);
	}
	printf("\n");
	fclose(fp);
	return 0;
}