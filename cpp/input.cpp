#include<stdio.h>
int main(){
    int a, b;
    printf("请输入任意两个个数值,空格分隔: ");
    scanf("%d %d", &a, &b);
    int result = a - b;
    int result2 = a + b;
    printf("差为%d 和为%d\n", result, result2);

    return 0;
}