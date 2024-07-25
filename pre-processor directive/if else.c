#include<stdio.h>
#define AGE 20
int main(){
    #if AGE>=18
     printf("You can vote");
    #else
        printf("You're not eligible to vote.");
    #endif
    return 0;
}



