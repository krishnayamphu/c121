#include<stdio.h>
#define POW(n) n*n
int main(){
    #ifdef POW
    printf("macro already defined");
    #endif // POW
    return 0;
}



