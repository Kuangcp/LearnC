/*计算器*/
#include<stdio.h>
#include<string.h>
int ten(int x)
{int ten=1;
for(int i=0;i<x;i++)
ten*=10;
return ten;
}
//10^N 

int dus(char *first,char *last)
{int i=0,j=0;
int len=last-first+1; 
int sum=0;
 
for(;i<len;i++)
	{if(*last!=' ')//忽略空格 
	sum+=((*last)-'0')*ten(j++);
	last--;	
	}
return sum; 
}

void dusf(char a[],char b[],float c[])
{
int i=1,j=1;
int size=strlen(a+1);
char *first=&a[1];
char *last;

for(;i<size;i++) 
	{
	if(a[i]=='+'||a[i]=='-'||a[i]=='*'||a[i]=='/')
		{
		last=&a[i]-1;
		c[j]=dus(first,last);
		//printf("%d\t",c[j]);
		first=&a[i]+1;
		b[j++]=a[i];//放符号 
		//putchar(b[j-1]);
		//putchar('\t');
		//putchar('s'); 
		}
	 //else putchar('o'); 
	}
 
	
c[j]=dus(first,a+strlen(a+1));
//printf("%d\t",c[j]);	
}

int arrlen(float *p)
{int count=0;
while(*p!=0)
 	{p++;
 	count++;
 	}
 	
 return count;
}


void asi(float num[])
{
int len=arrlen(num);
//printf("len%d",len);
for(int i=0;i<len;i++)
	{ num[i]=num[i+1]; 
	} 
//while((num[i]=num[i+1]!=0)i++;
	
}
//整理int数组 前移 

void asc(char a[])
{
int len=strlen(a);
//printf("le%d\t",len);
for(int i=0;i<len;i++)
	{ a[i]=a[i+1]; 
	} 
}

bool fAc1(char sign[],float num[])
{
int size=strlen(sign+1);	
for(int i=1;i<=size;i++)
	{
		if(sign[i]=='*')
			{
				num[i]*=num[i+1];/
			//	printf("%d\t",num[i]); 
				asi(&num[i+1]);
			//printf("*%d\t",num[i+1]);	
				asc(&sign[i]);
				
			return 1;	
			} 
		if(sign[i]=='/')
			{
				num[i]/=num[i+1];
				asi(&num[i+1]);
				asc(&sign[i]); 
			return 1;	
			} 	
	
	
	}
return 0;	
}
bool fAc2(char sign[],float num[])
{
int size=sizeof(sign);
	
for(int i=0;i<size;i++)
	{

		if(sign[i]=='+')
			{
				num[i]+=num[i+1];
			//printf("%d\t",num[i]);	
				asi(&num[i+1]);
			//printf("+%d\t",num[i+1]);	
				asc(&sign[i]);
			//printf("%c\t",sign[i]);	
			return 1;	
			} 
		if(sign[i]=='-')
			{
				num[i]-=num[i+1];
				asi(&num[i+1]);
				asc(&sign[i]); 
			return 1;	
			} 				
	} 
return 0;	
}

int main()
{char a[21]={0};
float num[11]={0};
char sign[11]={0};
//freopen("data