#include<stdio.h>
int main(){
    int a, b;
    printf("请输入任意两个数值,空格分隔: ");
    scanf("%d %d", &a, &b);
    if(a > b){
        printf("%d %d\n", a, a-b);
    }else{
        printf("%d %d\n", b, b-a);
    }
    return 0;
}