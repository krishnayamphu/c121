#include<stdio.h>
#define P 90
int main(){
    #if P>=90
        printf("Excellent");
    #elif P>=75
        printf("V. Good");
    #elif P>=60
        printf("Good");
    #elif P>=45
        printf("Satisfactory");
    #else
        printf("Poor");
    #endif // P
return 0;
}
