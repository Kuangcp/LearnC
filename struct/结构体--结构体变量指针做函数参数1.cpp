#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student 
{
	long num;
	char name[20];
	float score[3];
};

void main()
{
	void print(struct student * );
	struct student stu;
	stu.num=3021210;
	strcpy(stu.name,"li dong");
	stu.score[0]=67.5;
	stu.score[1]=89;
	stu.score[2]=78.6;//浮点数据的存储导致了结果是18。599998
	print (&stu);//使用函数
}
void print(struct student *p)
{
	printf("%ld\n%s\n%f\n%f\n%f\n",p->num,p->name,p->score[0],p->score[1],p->score[2]);
	printf("\n");
}
