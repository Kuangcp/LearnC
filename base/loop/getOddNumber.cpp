#include<stdio.h>
int main(){
    int i;
    int sum = 0;
    int count = 0;
    for(i = 1; i <= 100; i++){
        if(i%2 == 1){
            count++;
            sum += i;
        }
    }
    printf("一共有奇数:%d 和为%d\n", count, sum);

    return 0;
}