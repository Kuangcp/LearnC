#include <stdio.h>
#include <string.h>

// argc 参数数量 args 是真实的参数数量 (执行的文件名, 参数....)
int main(int argc, char* args[]){
    printf("arg=%d  le=%d \n", strlen(*args), argc);
    int i = 1; 
    for(;i<argc; i++)
    {
        printf("%s ", args[i]);
    }
    // printf("%s", *args);
    return 0;
}