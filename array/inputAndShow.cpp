#include<stdio.h>

int main(){
    int a[10] = {0};
    int *p = a;
    int i;
    for(i=0; i<10; i++){
        scanf("%d", &a[i]);
    }
    for(i=0; i<10; i++){
        printf("%d", p [i]);
    }
    return 0;
}
