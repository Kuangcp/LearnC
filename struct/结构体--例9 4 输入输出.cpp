#include <stdio.h>
#include <stdlib.h>
//定义结构体类型：
struct stud_type
{
	char name [20];
	long num;
	int age;
	char sex;
};

void main()
{
	void list(struct stud_type student);//函数声明，且注明了student是结构体变量
	struct stud_type student[3],*p;//定义结构体数组，也叫student
	int i;
	char numstr[20];//尚且不明白有啥用
	for (i=0,p=student;i<3;p++,i++)
	{
		printf("输入学生%d信息:\n",i);
		scanf("%s%ld%d%c",p->name,&p->num,&p->age,&p->sex);
	}
	for (i=0;i<3;i++) list(student[i]);
}
void list(struct stud_type student)
/*
书上是：void list(student)
{
struct stud_type student;
}但是程序报错了？？
*/
{
	printf("%-20s %8ld %6d %3c\n",student.name,student.num,student.age,student.sex);
}