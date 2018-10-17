#include<stdio.h>

void first()
{
    printf("invoke method\n");
}

void handle()
{
    int arr[5] = {0};
    arr[6] = 8;
    printf("handle %d\n", arr[6]);
    // arr[6] = (int)first;
}

void readMemo()
{
    int arr[1] = {0};
    int i = 0;
    for (;i<10;i++)
    {
        printf("%d\n", arr[i]);
    }
}

int main(int argc, char* args[])
{
    // handle();
    readMemo();
    printf("main\n");
    return 0;
}