#include<stdio.h>
int main(){
    int i, j, a[10]={1, 3, 4, 5, 6, 7, 3, 5, 7, 3};
    // for(i=1; i<10; i++){
    //     scanf("%d", &a[i]);
    // }
    for(i=0; i<=9; i++){
        for(j=9; j>i; j--){
            if(a[j-1] < a[j]){
                int t = a[j-1];
                a[j-1] = a[j];
                a[j] = t;
            }
        }
    }
    for(i=0; i<10; i++){
        printf("%d ", a[i]);
    }
    return 0;
}
// 输出为 7 7 6 5 5 4 3 3 3 1