#include<stdio.h>
#include<stdlib.h>
struct Node
{
int data;
struct Node *next;
};
typedef struct Node node_t;
typedef struct Link list{
node_t *phead;
node_t *ptail;
int len;
}Link list;

static node_t *GetNode(int i)//新建并初始化节点
{
node_t *pNode;
pNode=(node_t*)malloc(sizeof(node_t));
if(!pNode)
{
printf("Error,thememoryisnotenough!\n");
exit(-1);
}
pNode->data=i;
pNode->next=NULL;
return pNode;
}
void init_list(Linklist*plist)//用第一个节点初始化循环单链表
{
node_t *p;
p=GetNode(1);
//printf("TheNewNodeis:%d\n",p->data);//****TEST****
plist->phead=p;
plist->ptail=p;
p->next=plist->phead;
plist->len=1;
}
static void Create_List(Linklist*plist,intn)//把其余数据添加到循环单链表中
{
int i=0;
node_t *pNew;
for(i=2;i<=n;i++)
{
pNew=GetNode(i);
/********TEST********
printf("TheNewNodeis:%d\n",pNew->data);
********TEST********/
plist->ptail->next=pNew;
plist->ptail=pNew;
pNew->next=plist->phead;
plist->len++;
}
printf("Completesthee-waycirculationchaintablethefoundation!\n");
}
void Print_List(Linklist*plist)//输出链表内容
{
node_t *pCur=plist->phead;
do
{
printf("The%dperson.\n",pCur->data);
pCur=pCur->next;
}while(pCur!=plist->phead);
printf("ThelengthoftheList:%d\n",plist->len);
}
 
约瑟夫回环函数实现
 
void joseph(Linklist*plist,intm)//约瑟夫回环函数实现
{
node_t *pPre=plist->ptail;
node_t *pCur=plist->phead;
int i;
while(plist->len!=1)
{
i=0;
while(i<m-1)
{
pPre=pPre->next;
i++;
}
pCur=pPre->next;
pPre->next=pCur->next;
free(pCur);
plist->len--;
}
printf("Thelastoneis:%d\n",pPre->data);
}
intmain()
{
int n=0;
printf("PleaseinputtheLengthoftheCirclelist:");
scanf("%d",&n);
int m=0;
printf("PleaseinputtheStoppoint:");
scanf("%d",&m);
LinklistpList;
init_list(&pList);
Create_List(&pList,n);
Print_List(&pList);
joseph(&pList,m);
return0;
}
