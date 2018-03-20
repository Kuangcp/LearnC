#include<stdio.h>

char push(char input){
    return input+=4;
}
int main(){
    char c1 = 'C';
    char c2 = 'h';
    char c3 = 'i';
    char c4 = 'n';
    char c5 = 'a';

    c1 = push(c1);
    c2 = push(c2);
    c3 = push(c3);
    c4 = push(c4);
    c5 = push(c5);
    printf("%c %c %c %c %c \n", c1, c2, c3, c4, c5);
    return 0;
}