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

// 值传递(传递地址值)，形参 a b 都是指向实参内存地址
// 能改变实参的值但是无法改变实参指针指向
void swapWithPoint(int *a, int *b)
{
    int tmp = *b;
    *b = *a;
    *a = tmp;
    showInfo("swapWithPoint after", a, b);
}

// C++ 语法 引用传递 此时实参和形参可视为等价
void swapWithQuote(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
    showInfo("swapWithQuote after", &a, &b);
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

    printf("\n\n");
    showInfo("main before", &a, &b);
    swapWithQuote(a, b);
    showInfo("main after", &a, &b);
    return 0;
}