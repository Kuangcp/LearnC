#include <stdio.h>
#include <stdlib.h>

//2048游戏
int main(){

    switch(c){
        case 'W':for (n=0;n<4;n++)
			 for (m=3;m>0;m--)
				 if (a[m][n] == a[m-1][n])
					 plus(a[m][n],a[m-1][n]) ;
        case 'S':for (n=0;n<4;n++)
			 for (m=0;m<3;m++)
				 if (a[m][n] == a[m+1][n])
					 plus(a[m][n],a[m+1][n]) ;
        case 'A':for (m=0;m<4;m++)
			 for (n=3;n>0;n--)
				 if (a[m][n] == a[m][n-1])
					 plus(a[m][n],a[m][n-1]) ;
        case 'D':for (m=0;m<4;m++)
			 for (n=0;n<3;n++)
				 if (a[m][n] == a[m][n+1])
					 plus(a[m][n],a[m][n+1]);
        default: ;
    }
    return 0;
}
