#include "stdio.h"
#include "stdlib.h"

struct person
{
    int age;
    int weight;
};

// TODO 引用传递， 实参指向的内存地址没有变 但是值已经被改
void assign(person &p)
{
    printf("%p %d\n", &p, p.age);
    person *d = (struct person *) malloc(sizeof (struct person));
    printf("%p %d\n", d, *d);
    p = *d;
    p.age = 12;
    p.weight = 122;
    printf("%p %d\n", &p, p.age);
}

int main()
{
    person a = {21, 120};

    printf("main before %p %d\n", &a, a.age);
    assign(a);
    printf("main after %p %d\n", &a, a.age);
    return 0;
}