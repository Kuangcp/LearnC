#include "stdio.h"

void showInfo(char *str, int *a, int *b)
{
    printf("%s \n a = %d, &a = %p \n b = %d, &b = %p\n", str, *a, a, *b, b);
}

// 值传递，形参 a b 都是新内存地址
void swap(int a, int b)
{
    showInfo("swap before", &a, &b);
    int tmp = a;
    a = b;
    b = tmp;
    showInfo("swap after", &a, &b);
}

// 引用传递，形参 a b 都是实参内存地址
void swapWithPoint(int *a, int *b)
{
    int tmp = *b;
    *b = *a;
    *a = tmp;
    showInfo("swapWithPoint after", a, b);
}

int main()
{
    int a = 1;
    int b = 2;
    showInfo("main before", &a, &b);
    swap(a, b);
    showInfo("main after", &a, &b);

    printf("\n\n");
    showInfo("main before", &a, &b);
    swapWithPoint(&a, &b);
    showInfo("main after", &a, &b);
    return 0;
}