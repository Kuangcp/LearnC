#include<stdio.h>
#include<stdlib.h>

int main(){
    int input;
    printf("请输入任意一个数值");
    scanf("%d", &input);
    int result = abs(input);
    printf("绝对值是%d\n", input);
    return 0;
}