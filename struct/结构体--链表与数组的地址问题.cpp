//链表地址问题：地址越来越小且不连续，即链表散乱的往上延伸
///这一段程序被固定存储在某一位置，每次程序运行的得到的地址结果也总是一样的。。。

#include <stdio.h>
#include <stdlib.h>
#define NULL 0
#define LEN sizeof(struct student)
struct student//结构体
{
	long num;
	long score;
	struct student *next;
};
int n;//全局变量
struct student *create() //此结构体类型 指针的函数，返回一个指向链表头的指针
{
	struct student *head,*p1,*p2;
	n=0,head=NULL;
	p1=p2=(struct student *)malloc(LEN);//创建第一个结点,申请内存
	    printf("地址:  p1=%d   p2=%d   head=%d  \n",p1,p2,head);//查看地址
	scanf("%ld,%ld",&p1->num,&p1->score);//输入结构体数据
	    printf("%ld,%ld\n",(*p1).num,(*p1).score);//查看地址
	p1->next=NULL;
	while (p1->num!=0)//延长链表的循环操作
	{
		++n;//记录链表长度
		if (n==1) head=p1;//是第一个结点，做表头
		else p2->next=p1;//不是第一个，做表尾
		p2=p1;//把工具p1的数据存入p2，延长链表
		p1=(struct student *)malloc(LEN);//把p1当做一个开辟链表的工具，多次利用
		    printf("地址：\np1=%d^^p2=%d^^head=%d\n",p1,p2,head);//查看地址
		scanf ("%ld,%ld",&p1->num,&p1->score);
		    printf("%ld,%ld\n",(*p1).num,(*p1).score);//查看地址
		p1->next=NULL;//表尾的结束符
	}
	free(p1);//释放自由变化的指针变量p1的内存
	return(head);
}

void main ()
{
	*create();
}

///////数组：

#include <stdio.h>
void main()
{
    int  a[9]={1,2,3,4,5,6,7,8},*p,i;
	for (i=0;i<9;i++)
	{
	  p=&a[i];
	  printf ("地址是：%d\t",p);
	  printf ("a[%d]=%d\n",i,a[i]);//地址越来越大，且连续
	}
///这一段程序被固定存储在某一位置，每次程序运行的得到的地址结果也总是一样的。。。
}

/*
**结论：字符占1个字节，整型或者长整型占4个字节
**数组的存储是连续的存储在一个区域，链表的存储是跳跃性的，不连续的存储
**输入这一块：scanf不知怎么输入score
**而且不知道怎么输出链表内容
**2015/2/14  21:44
*/

	
