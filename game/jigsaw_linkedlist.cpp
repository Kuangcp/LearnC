//用大写锁定，大写的WSAD控制数字上下左右移动，初始化要复制粘贴最下面的那一串数字，才能开始游戏
#include <stdio.h>
#include <stdlib.h>
struct pp {  //定义结构体，用于建立双向链表
	int data ;
	int up ;
	int down ;
	int left ;
	int right ;
	struct pp * next1 ;
	struct pp * next2 ;
};
struct pp *p1,*p2 = NULL,*head = NULL;//全部作为全局变量，便于操作
struct pp *swap(struct pp * m,struct pp * n){ //交换函数////
	int t ;
	t=m->data ;
	m->data = n->data ;
	n->data = t ;
	return m,n;
}
struct pp *build(int n){//////////////////建立双向链表/////////
	printf ("请输入数据：");
	while (n){
		p1=(struct pp *)malloc(sizeof(struct pp));
		scanf ("%d %d %d %d %d",&p1->data,&p1->up,&p1->down,&p1->left,&p1->right) ;
		if (head == NULL){
			head = p1 ;
			p2 = head ;
			head->next2 = NULL ;
		}else{
			p2->next2 = p1 ;
			p1->next1 = p2 ;
			p2 = p1 ;
			p2->next2 = NULL ;
		}
		n--;
	}
	return p2;
}
void  choose(char c)//查找到两个要交换的节点，并交换/////////////
{
	struct pp *p3=head;
	struct pp *p4;
	int z=3;
	while (p3->data != 0){
		p3 = p3->next2;
	}
	p4=p3;
	switch (c){
		case 'S':if(p3->up) while(z--) p4 = p4->next1 ;swap(p4,p3);break;
		case 'D':if(p3->left) p4 = p4->next1 ;swap(p4,p3);break;
		case 'W':if(p3->down) while(z--) p4 = p4->next2 ;swap(p3,p4);break;
		case 'A':if(p3->right) p4 = p4->next2 ;swap(p4,p3);break;
		default: ;
	}
}

int shuchu(){ //输出函数,用结构体形参就会报错，目前还没找到解决方法；
	struct pp *qq=head;
	int n=9,i=1;
	while (n--){
		if(qq->data == 0){
			printf ("    ");
		}
		else{
			printf ("%3d ",qq->data);
		}
		i++;
		if ((i-1)%3 == 0){
			printf ("\n");
		}
		qq=qq->next2;
	}
	return 0;

}
int main (){
	char c='9',z[20];
	struct pp *q;
	int n=9,i=1,x[10];
	q=build(n);
	shuchu();
	while (1){
		printf ("请输入方向： ");
		scanf("%s",z);//去除多个字符的干扰，每次输入的第一个字符才起作用
		c = z[0];
	    choose(c);//执行交换
		shuchu();//输出链表
		/*for(i=0;i<8;i++)
		{
			x[i] = q->data;
			q = q->next2;
		}*/
	}
	return 0;
}
    
/*
5 0 1 0 1 2 0 1 1 1 8 0 1 1 0 6 1 1 0 1 7 1 1 1 1 3 1 1 1 0 4 1 0 0 1 1 1 0 1 1 0 1 0 1 0
*/
