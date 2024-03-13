#include <stdlib.h>
#include <stdio.h>
 
int main(void)
{
    float f;
    char* str = "1.36";
    f = atof(str);
    printf("string=%s,f=%f\n",str,f);
    printf("%f\n",1.2 + 0.16);
    return 0;
}