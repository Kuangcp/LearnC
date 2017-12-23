#include<stdio.h>
#include<string.h>
int i;
double ZFZH(char price[])
{
	double prices,a,b;
	for (i=0;i<4;i++)
		if (price[i]>'0'&&price[i]<'9')
			a=a*10+(price[i]-'0');//整数部分
	for (i=8;i>4;i--)
		if (price[i]>'0'&&price[i]<'9')
			b=b/10+(price[i]-'0');//小数部分
	prices=a+b;
	return prices;
}
FILE *BD(FILE *p,char str[10])//查找商品名
{

	int c;char str_s[10];
	while (c!='*')
		fseek(p,1,1);
	c=fgetc(p);
	for (i=0;c!='#';i++)
	{
		str_s[i]=c;
		fseek(p,1,1);
	}
	if (!strcmp(str,str_s)) return p;
	else if(fgetc(p)!=EOF)
		BD(p,str);
	else return 0;
}
void main ()
{
	FILE *fp1,*fp2;
	fp1=fopen("a-超市数据.txt","r");
	fp2=fp1;
	char str[10],price[10];
	double prices,num,sum,total;
	printf("请输入名称，数量");
	scanf ("%s,%d",str,num); //输入商品  
	while (1)
	{
		   fp1=BD(fp1,str);//比对名称
		fseek(fp1,1,1);
		fgets(price,10,fp1);
		   prices=ZFZH(price);//存储价格
		total=prices*num;
		sum+=total;
		printf("%s %s %d %d",str,price,num,total);
		fp2=fp1;
		if(fgetc(fp2)==EOF) break; 
	}
	printf("sum=%d",sum);
	fclose(fp1);
	if ()return;
}