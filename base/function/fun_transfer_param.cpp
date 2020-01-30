#include "stdio.h"
#include "stdlib.h"

#define NUM 9

// 为什么 Java 只有值传递，但 C# 既有值传递，又有引用传递，这种语言设计有哪些好处？ - 知乎用户的回答 - 知乎
// https://www.zhihu.com/question/20628016/answer/28970414

void showInfo(char *str, int *a)
{
    printf("%s \n a = %d, &a = %p \n", str, *a, a);
}

// 值传递，形参 a b 都是新内存地址
void assign(int a)
{
    a = NUM;
    showInfo("assign after", &a);
}

// 值传递(传递地址值)，形参 a b 都是指向实参内存地址
// 能改变实参的值但是无法改变实参指针指向
void assignWithPoint(int *a)
{
    *a = NUM;
    showInfo("assignWithPoint after", a);
}

// C++ 语法 引用传递 此时实参和形参可视为等价 但是也无法改变实参指针指向
void assignWithQuote(int &a)
{
    a = NUM;
    showInfo("assignWithQuote after", &a);
}

int main()
{
    int a = 1;
    showInfo("main before", &a);
    assign(a);
    showInfo("main after", &a);

    a = 1;
    printf("\n\n");
    showInfo("main before", &a);
    assignWithPoint(&a);
    showInfo("main after", &a);

    a = 1;
    printf("\n\n");
    showInfo("main before", &a);
    assignWithQuote(a);
    showInfo("main after", &a);
    return 0;
}