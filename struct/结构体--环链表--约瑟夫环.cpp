#include <stdio.h>//约瑟夫环问题  循环链表
#include <malloc.h>
typedef struct Node//定义单链表节点Node
{
	int data;
	struct Node *next;
}Node;
Node *Creat(int n);//声明
void Joseph(Node *rear,int n);//声明

int main ()
{
	int n,m;
	Node *rear=NULL;//定义尾指针
	    printf ("请输入约瑟夫环的长度\n");//n是长度，m是密码
	scanf("%d",&n);
	    printf ("请输入密码：\n");
	scanf ("%d",&m);
	rear=Creat(n);//函数调用，返回的尾指针赋值给rear
	Joseph(rear,m);//函数调用，实参rear是尾指针
	return 0;//将0返回操作系统，表明程序正常结束
}
Node *Creat(int n)//函数定义，返回值是循环单链表的尾指针
{
	Node *rear=NULL,*s;//定义尾指针rear，初始化
	int i;
	rear=(Node *)malloc(sizeof (Node));//申请节点
	rear->data=1;//第一个节点的数据域是1
	rear->next=rear;//建立长度为1的循环单链表
	for (i=2;i<=n;i++)//依次插入数据域为2,3,4,5....n的节点
	{
		s=(Node *)malloc(sizeof (Node));//申请
		s->data=i;//数据域中填入数据
		s->next=rear->next;
		rear->next=s;//这两句话，实现了将s插入到尾节点rear的后面
		rear=s;//指针rear指向当前的尾节点
	}
	return rear;
}
void Joseph(Node *rear,int m)//函数定义，形参rear为循环单链表的尾指针，形参m是密码
{
	Node *pre=rear,*p=rear->next,*q;//初始化工作指针p和pre，p指向环的最后一个节点，pre在p的前面
	int count=1;//初始化计数器count
	printf ("出环的顺序是：");
	while (p->next!=p)//循环，直到循环链表中只剩下一个节点  即：p自己指向自己
	{
		if (count<m)//计数器未累加到密码值
		{
			pre=p;p=p->next;//将工作指针pre和p分别后移，pre在p的前面
			count++;
		}
		else//计数器已经累加到密码值
		{
			printf ("%-3d",p->data);
			q=p;//指针q暂存即将删除的节点
			pre->next=p->next;//节点p摘链，pre那个节点连接时绕过该q节点
			p=pre->next;//工作指针p后移。pre不动。始终pre和p前后相连
			free(q);
			count=1;//计数器重置为1
		}
	}
	printf ("%-3d\n",p->data);//输出最后一个节点
	free (p);//结束函数，返回main
	return;
}