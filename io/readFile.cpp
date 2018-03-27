#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *fp;
	char ch;
	if ((fp=fopen("data.ini","r"))==NULL){
		printf ("this file cannot opened\n");
		exit(1);
	}
	while ((ch=fgetc(fp))!=EOF){
		fputc(ch,stdout);
	}
	printf("\n");
	fclose(fp);
	return 0;
}