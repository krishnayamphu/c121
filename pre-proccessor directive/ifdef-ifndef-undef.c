#include<stdio.h>
#define PI 3.14
#undef PI
#ifndef NAME
    #define NAME "Aptech"
#endif // NAME
int main(){
    #ifdef PI
        printf("PI Macro is defined");
    #endif // PI

    printf("\nName: %s",NAME);
return 0;
}
