#include <stdio.h> 
#define S 10 
#define C 5 
int scores[S][C]; 
void input(void) 
{ 
    int i, j; 
    for(i = 0; i < S; i ++) 
    { 
        printf("input %d scores of student %d \n", C, i+1); 
        for(j = 0; j < C; j ++) 
            scanf("%d", &scores[i][j]); 

    } 

} 

  

void calc_ave(void) 
{ 
    int i, j; 
    float a; 
    for(i = 0; i < S; i ++) 
    { 
        for(a = 0, j = 0; j < C; j ++) 
            a += scores[i][j]; 
        a/=C; 
        printf("average score of student %d is %.2f\n", i+1, a); 
    } 

} 

  

void output(void) 

{ 

    int i, j; 

    for(i = 0; i < S; i ++) 

    { 

        printf("%03d ", i+1); 

        for(j = 0; j < C; j ++) 

            printf("%3d ", scores[i][j]); 

        printf("\n"); 

    } 

} 

  

void find_max(void) 

{ 

    int i, j, mi, mj; 

    for(mi= mj = i = 0; i < S; i ++) 

        for(j = 0; j < C; j ++) 

            if(scores[i][j] > scores[mi][mj]) mi = i, mj = j; 

    printf("the max score is class %d of student %d\n", mj + 1, mi + 1); 

} 

  

void find_more_than_90(void) 

{ 

    int i, j; 

    for(i = 0; i < S; i ++) 

    { 

        for(j = 0; j < C; j ++) 

            if(scores[i][j] <=90) break; 

        if(j == C) printf("student %d has score more than 90 on every class\n", i + 1); 

    } 

} 

  

int main() 

{ 

    input(); 

    calc_ave(); 

    output(); 

    find_max(); 

    find_more_than_90(); 

  

    return 0; 

}
/*#include<stdio.h>
main()
{
	int a[10][5],i,k;
	float p,s;
	for (i=0;i<10;i++)
		for (k=0;k<5;k++)
			scanf ("%d",a[i][k]);
//求每个人平均成绩
		for (i=0;i<10;i++)
			for (k=0;k<5;k++)
			{
				s=a[0][k]+s;
				p=s/5;
				printf ("第%d个同学平均成绩是%d",i,p);
			}
			for (k=0;k<5;k++)
				for (i=0;i<10;i++)
				{
					s=a[i][k]+s; 
					p=s/10;
					printf ("第%d门课程平均成绩是%d",k,p);

				}

}*/