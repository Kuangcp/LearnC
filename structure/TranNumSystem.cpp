#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define STACK_SIZE 100
// 进制转换

typedef struct
{
	int *base;
	int *top;
	int stacksize;
}SeqStack;

void Initial(SeqStack *s)//构造一个长度为STACK_SIZE的栈
{
	s->base =(int *)malloc(STACK_SIZE *sizeof(int));
	if (!s->base )exit(-1);
	s->top =s->base ;
	s->stacksize =STACK_SIZE;
}

int IsEmpty(SeqStack *S)//判断栈空
{
	return S->top==S->base;//返回真假
}
int IsFull(SeqStack *S)//判断栈满
{
	return S->top -S->base ==STACK_SIZE-1;//返回真假
}
void Push(SeqStack *S,int x){//取余的数进栈
	if (IsFull(S)){
		printf ("栈上溢");//上溢，退出运行
		exit (1);
	}
	*S->top++=x;//栈顶指针加1后，将x入栈？？先进再指针加1
	//*S->top++的解释：*是对结构体指针S中的指针top进行引用再++  和书上有矛盾？？？？？？
}

int Pop(SeqStack *S){//出栈
	if (IsEmpty(S)){
		printf ("栈为空");//下溢，退出运行
		exit(1);
	}
	return *--S->top ;//栈顶元素返回后将栈顶指针减1
	//个人认为：先减再返回
}

int Top(SeqStack *S){//取栈顶元素
	if (IsEmpty(S)){
		printf ("栈为空");//下溢，退出运行
		exit(1);
	}
	return *(S->top-1);
}


int conversion(int N,int B){
	int i;
	SeqStack *S;
	Initial(S);
	while(N)//从右向左产生B进制的各位数字，并将其进栈
	{
		Push(S,N%B);//将bi进栈0<=i<=j
		N=N/B;
	}

	while (!IsEmpty(S))//栈非空时退栈输出
	{
		i=Pop(S);
		printf ("%d",i);//输出栈元素
	}
	return 0;
}


int main (){
	int n,d;
	printf ("输入数字");
	scanf("%d",&n);
	printf ("输入你要转换的进制");
	scanf ("%d",&d);
	printf ("结果是：");
	conversion (n,d);
	return 0;
}