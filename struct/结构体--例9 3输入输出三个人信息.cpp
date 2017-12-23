#include <stdio.h>
#include <stdlib.h>
//定义结构体类型，注意末尾的分号
struct stud_type
{
	char name[20];
	long num;
	int age;
	char sex;
};

void main()
{
	struct stud_type student[3],*p;
	int i;
	char numstr[20];//不明白
	for (i=0,p=student;i<3;p++,i++)
	{
		printf ("输入学生%d数据:\n",i);
		scanf ("%s%ld%d%c",p->name,&p->num,&p->age,&p->sex);//注意&符号的用法
	}
	for (i=0,p=student;p<student+3;p++,i++)//这是在这里实现循环三次的功能，也能依据student的数据实现自动去更改循环次数
		printf ("%3d %-20s %8ld %6d %3c\n",i,p->name,p->num,p->age,p->sex);
}