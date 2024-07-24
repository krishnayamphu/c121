#include<stdio.h>
#define PI
int main(){
    #ifndef PI
    printf("PI is not defined");
    #else
    printf("PI is already defined");
    #endif // PI
    return 0;
}



