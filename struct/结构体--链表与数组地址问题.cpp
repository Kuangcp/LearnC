//链表地址问题：
#include <stdio.h>
#include <stdlib.h>
#define NULL 0
#define LEN sizeof(struct student)
struct student
{
	long num;
	long score;
	struct student *next;
};
int n;
struct student *create() //此函数带回一个指向链表头的指针
{
	struct student *head,*p1,*p2;
	n=0,head=NULL;
	p1=p2=(struct student *)malloc(LEN);//创建第一个结点
	  printf("地址：\np1=%d^^p2=%d^^head=%d\n",p1,p2,head);
	scanf("%ld,%ld",&p1->num,&p1->score);//把其中一个p1改为p2就会出错，而且逗号的存在好奇怪。
	  printf("%ld,%f\n",(*p1).num,(*p1).score);
	p1->next=NULL;
	while (p1->num!=0)//延长链表的循环操作
	{
		++n;
		if (n==1) head=p1;//是第一个结点，做表头
		else p2->next=p1;//不是第一个，做表尾
		p2=p1;
		p1=(struct student *)malloc(LEN);//开辟下一个结点
		  printf("地址：\np1=%d^^p2=%d^^head=%d\n",p1,p2,head);
		scanf ("%ld,%ld",&p1->num,&p1->score);
		  printf("%ld,%f\n",(*p1).num,(*p1).score);
		p1->next=NULL;
	}
	free(p1);
	return(head);
}

void main ()
{
	*create();
}
//数组：
/*#include <stdio.h>
void main()
{
    int a[5]={1,2,3,4,5},*p,i;
	for (i=0;i<5;i++)
	{
	  p=&a[i];
	  printf ("地址是：%d\n",p);
	  printf ("a[%d]=%d\n",i,a[i]);
	}
}*/

/*

结论：字符占1个字节，整型或者长整型占4个字节
数组的存储是连续的存储在一个区域，链表的存储是跳跃性的，不连续的存储
输入这一块：scanf不知怎么输入score
而且不知道怎么输出链表内容
2015/2/14  21:44
*/

	
