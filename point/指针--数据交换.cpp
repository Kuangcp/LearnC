//   函数形参为指针变量，用指针变量作为实参

			/*#include <stdio.h>
			void main()
			{
				int a,b;
				int *pa,*pb;
				void swap (int *p1,int *p2);
				scanf ("%d%d",&a,&b);
				pa=&a;
				pb=&b;
				swap (pa,pb);
				printf("\na=%d,b=%d\n",a,b);
			}
			void swap (int *p1,int *p2)
			{
				int temp;
				temp=*p1;
				*p1=*p2;
				*p2=temp;
			}*/


//   函数形参为指针变量，用变量地址作为实参

			/*#include <stdio.h>
			void main()
			{
				int a,b;
				int *pa,*pb;
				void swap (int *p1,int *p2);
				scanf ("%d%d",&a,&b);
				swap (&a,&b);
				printf("\na=%d,b=%d\n",a,b);
			}
			void swap (int *p1,int *p2)
			{
				int temp;
				temp=*p1;
				*p1=*p2;
				*p2=temp;
			}*/

//前两种是一样的语句，就是指针变量和地址的细微区别

//   无效的交换。。。。

            #include <stdio.h>
			void main()
			{
				int a,b;
				int *pa,*pb;
				void swap (int *p1,int *p2);
				scanf ("%d%d",&a,&b);
				pa=&a;
				pb=&b;
				swap (pa,pb);
				printf("\na=%d,b=%d\n",a,b);
			}
			void swap (int *p1,int *p2)
			{
				int *p;
				p=p1;
				p1=p2;
				p2=p;
				printf("%d***%d",*p1,*p2);//做到了交换，但是不会影响实参
			}