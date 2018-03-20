#include<stdio.h>
int main(){
    int a, b, c;
    printf("请输入任意三个数值,空格分隔: ");
    scanf("%d %d %d", &a, &b, &c);
    // 交换a和b
    if(a > b){
        int temp = b;
        b = a;
        a = temp;
    }
    // 交换b 和 c
    if(b > c){
        int temp = c;
        c = b;
        b = temp;
    }
    // 再次比较交换 a和b
    if(a > b){
        int temp = b;
        b = a;
        a = temp;
    }
    printf(" %d %d %d \n", a, b, c);
    return 0;
}