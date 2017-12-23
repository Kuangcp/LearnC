#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	char ch;
	if ((fp=fopen("rrrr.cpp","r"))==NULL)//
	{
		printf ("file cannot opened\n");
		exit(1);
	}
	while ((ch=fgetc(fp))!=EOF)//
		fputc(ch,stdout);
	printf("\n");
	fclose(fp);
}