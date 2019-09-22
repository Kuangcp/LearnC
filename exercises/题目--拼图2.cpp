//拼图游戏，这是属于穷举算法？好像所有情况都列举出来了、、、、
#include<stdio.h>
#define bb 3
#define aa 3

struct tu
{	int num;
    int up;
	int down;
	int left;
	int right;
};
//定义结构体，不能一次性把成员定义完？非要一个个定义？
struct tu a[aa][bb]={0};

struct tu csh()
{   int i,j,z=0;
	for (i=0;i<3;i++)
		for (j=0;j<3;j++)
		{	if (j==0||j==1) a[i][j].right=1;
			if (j==1||j==2) a[i][j].left=1;
            if (i==1||i==2) a[i][j].up=1;
            if (i==0||i==1) a[i][j].down=1;
			a[i][j].num=z;
			z++;
		}
		return (a[aa][bb]);
}
//返回时a空间被释放？
struct tu T(struct tu p,struct tu q)
{	int x;
	x=p.num;
	q.num=x;
	p.num=0;
	return(p,q);
}
//用指针怎么会出错？

void P(struct tu *p)
{	int a=0,i,k;
	for(i=0;i<3;i++)
	{  for (k=0;k<3;k++)
		{
		    printf ("%d",p->num);
			p++;
		}
		printf ("\n");
	}
}

struct tu print()
{
  int i,k,j;
  printf ("输入方向\n");//两句请输入方向？
  scanf ("%c",&j);
	switch(j)
	{
		case 'w':if(a[i][k].up) T(a[i-1][k],a[i][k]);else printf ("错误");break;
		case 's':if(a[i][k].down) T(a[i+1][k],a[i][k]);else printf ("错误");break;//P函数的使用?
		case 'a':if(a[i][k].left) T(a[i][k-1],a[i][k]);else printf ("错误");break;
		case 'd':if(a[i][k].right) T(a[i][k+1],a[i][k]);else printf ("错误");break;
		default:break;
	}
	return (a[aa][bb]);
}
//返回值？

main ()
{
	int i,k,j='w';
    struct tu *q;
	q=&a[0][0];
	P(q);
	printf ("%d",a[1][1].down);
	/*for (i=0;i<3;i++)
		for (k=0;k<3;k++)
		{
			if(!a[i][k].num)
			{
				while(j!='z')
				{
					printf ("输入方向\n");
					scanf ("%c",&j);
					switch(j)
					{
						case 'w':if(a[i][k].up) T(a[i-1][k],a[i][k]);else printf ("错误");break;
						case 's':if(a[i][k].down) T(a[i+1][k],a[i][k]);else printf ("错误");break;
						case 'a':if(a[i][k].left) T(a[i][k-1],a[i][k]);else printf ("错误");break;
						case 'd':if(a[i][k].right) T(a[i][k+1],a[i][k]);else printf ("错误");break;
						default:break;
					}
				}
			}

		}*/
}
//总结：过段时间学好了结构体再说吧、、、
//无语中、、、