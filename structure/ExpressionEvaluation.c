#include<stdio.h>
#include<string.h>

int Comp(char str1,char str2)//比较str1和str2的优先级 。。1：高 ，0：相同 ，-1：低
{
	switch(str1)
	{
	case'+':
	case'-':if (str2=='('||str2=='#') return 1;else return -1;break;
	case'*':
	case'/':if (str2=='*'||str2=='/')return -1;else return 1;break;
	case'(':return 1;break;
	case')':if (str2==')')return 0;else return 1;break;
	case'#':if (str2=='#')return 0;else return -1;break;
	default:break;
	}
}
///////////////////////主要内容///////////////////////主要内容////////////////////////////
int Compute(char *str)
{
	char OPND[100],OPTR[100];//定义两个顺序栈
	OPTR[0]='#';//栈初始化为定界符
	int top1=-1,top2=0;//初始化两个栈的栈顶指针
	int k,x,y,z,op;
	for (int i=0;str[i]!='\0';)///////依次扫描字符,字符全部存放在str中
	{
		if (str[i]>=48&&str[i]<=57)
			OPND[++top1]=str[i++]-48;//将字符转换为数字压栈
		else
		{
			k=Comp(str[i],OPTR[top2]);//k就是两个运算符优先级比较结果
			if (k==1)  OPTR[++top2]=str[i++];//str[i]优先级高就把他压栈
			else if (k==-1)//优先级低
			{
				y=OPND[top1--];//从运算对象栈出栈两个元素
				x=OPND[top1--];
				op=OPTR[top2--];//从运算符栈出栈一个元素
				switch(op)
				{
				case'+':z=x+y;break;
				case'-':z=x-y;break;
				case'*':z=x*y;break;
				case'/':z=x/y;break;
				default:break;
				}
				OPND[++top1]=z;//运算结果入运算对象栈
			}
			else//str[i]与栈顶元素的优先级相同
			{
				top2--;i++;//匹配str[i]，扫描下一个字符
			}
		}
	}
	return OPND[top1];//运算对象栈栈顶元素就是运算结果
}
int testCase(char * expression)
{
    strcat(expression, "#");
    int result = Compute(expression);

    return result;
}

int main()
{
	//char str[100];
	int result;
    // printf ("请输入一个算术表达式");
	// scanf ("%s",str);strcat(str,"#");//接收键盘输入并加上定界符#
	// result=Compute(str);

    char str[50]="1+3-5*2/4 - 1-1-1-1-1-1-1-1-1-1";
    result = testCase(str);
	printf ("表达式的值是:%d\n",result);
	return 0;
}
