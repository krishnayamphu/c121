#include<stdio.h>
#define NUM 0
#if NUM==0
#error "NUM value is zero"
#else
int main(){
   printf("NUM: %d",NUM);
    return 0;
}
#endif




