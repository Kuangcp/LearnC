#include<stdio.h>

// 当长度为3 循环的时候下标越界, 越界时访问到的其实是i, 所以导致了死循环, 如果长度为4就没有这种情况, 因为内存对齐的缘故
int main(int argc, char* argv[]){
    int i = 0;
    int arr[3] = {0};
    for(; i<=3; i++){
        arr[i] = 0;
        printf("hello world\n");
    }
    return 0;
}
