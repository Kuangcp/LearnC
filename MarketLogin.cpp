#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct ln //会员信息
{   
	char id[20];//会员账号    
    char key[20];//会员密码    
    int sum;//会员积分    
    struct ln *next;
} member;
struct lm//商品信息
{    int id;//商品编号   
     char name[50];//商品名称    
     int stock;//商品库存} 
     int goods[1000];
	 member *registe(member *t);//注册;
}good;



member *registe(member *t)//注册
{   
	printf("        现在开始会员注册\n\n");
    char id[20], key[20];   
	member *p, *q, *r;  
	p=t;    
	while(p->next) p=p->next;//寻找链表中最后一个结点    
	while(1)    
	{        
		printf("     请输入您注册的账号，密码：\n"); 
		scanf("%s %s", id, key); 
		q=t;    
		while(q)//判断该账号是否已经被注册     
		{           
			if(strcmp(q->id, id)==0) break; 
			else q=q->next;      
		}       
		if(q==NULL)//账号没有注册       
		{           
			r=(member *)malloc(sizeof(member));         
			r->next=NULL;       
			p->next=r;          
			strcpy(r->id, id);       
			strcpy(r->key, key);       
			r->sum=1000;//会员默认的积分为1000        
			break;  
		}       
	else 
		printf("该账号已被注册，请重新输入账号，密码\n");
    }    
	printf("恭喜您，已经注册成功。现在可以登录了\n\n");  
	return t;
} 


int login(member *t)//登录
{   
	printf("       现在开始登录\n"); 
	member *p;  
	char id[20], key[20];    
	int a, boo=0;   
	while(1)   
	{        
		printf("      请输入您的账号，密码：\n");    
		scanf("%s", id);      
		if(strcmp(id, "#")==0) break;   
		scanf("%s", key);     
		p=t;       
		while(p)      
		{          
			if(strcmp(p->id, id)==0 && strcmp(p->key, key)==0) break;           
			else p=p->next;  
		}      
		if(p==NULL)   
		{        
	 
			printf("对不起，该账号不存在或密码错误。请重新登录\n");   
			printf("         退出登录请按#\n");     
         }      
		else
			if(strcmp(id, "0")!=0){  boo=1; break;} 
   }   
   return boo;
}


void buy()//购买
{   
	char s[20];  
	int n, i;  
	while(1)  
	{       
		printf("   请输入商品的编号或者名称：\n");  
		scanf("%s", s);    
		  if(strcmp(s, "0")==0) break;       
		if(s[0]>='1' && s[0]<='9')     
		{        
			n=atoi(s);  
			for(i=0; i<1000; i++)   
			{                
				if( goods[i].id==n) break;  
			}           
			if(i>=1000)       
			{              
				printf("   商品不存在请重新输入，退出请按0\n");   
			}           
			else          
			{   printf("    您已购买成功。\n"); }  
		}      
		else 
		{             
			for(i=0; i<1000; i++)  
			{             
				if(strcmp(goods[i], s)==0) break;   
			}           
			if(i>=1000)           
			{           
		    	printf("   商品不存在请重新输入，退出请按0\n");      
			}  
			else          
			{            
				printf("    您已购买成功。\n");   
			}     
		}
	}
}



int main()
{   
	member *head=(member *)malloc(sizeof(member)); 
    strcpy(head->id, "0"), strcpy(head->key, "0");//超市管理员   
    head->next=NULL;   
    int i, a, n, boo=0;
    while(1)    
	{       
	 printf("          注册会员请按1：\n");
	 printf("        会员直接登录请按2：\n"); 
	 printf("          退出请按0：\n");       
	 scanf("%d", &a);       
	 if(a==0) break;       
	 if(a==1) head=registe(head);       
	 else 
		 if(a==2) boo=login(head);        
	 if(boo) break;  
	}   
    if(a && boo==1)   
	{       
	 printf("     尊贵的会员，您登录成功！\n");
	 buy();   
	}   
     printf("         已经安全退出\n");
}





