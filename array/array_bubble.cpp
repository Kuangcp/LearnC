#include<stdio.h>
#define N 6//定义字符常量  输入数字 N为数字控制量
int main(){
	int a[N],k,t,i;
	for (i=0;i<N;i++){
		printf("\n请输入第%d名学生的成绩：",i+1);
		scanf("%d",&a[i]);//对数组进行赋值
	}
	for (k=1;k<N-1;k++){//对数组进行冒泡排序
		for (i=N-1;i>=k;i--)
			if (a[i]<a[i-1]){
				t=a[i];
				a[i]=a[i-1];
				a[i-1]=t;
			}//反序，交换
	}
	printf("\n排序后的成绩是：\n");
	for (i=0;i<N;i++){
		printf("%4d\n",a[i]);//将数组输出 控制输出结果
	}
	return 0;
}
