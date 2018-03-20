#include<stdio.h>
int main(){
    char input;
    scanf("%c", &input);
    if(input> 'A' && input<'Z'){
        input += 32;
    }
    printf("转换后 %c\n", input);
    return 0;
}