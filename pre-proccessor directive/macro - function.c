#include<stdio.h>
#define SQR(n) n*n
#define LARGE(a,b) (a)>(b)?(a):(b)
int main(){
printf("%d",SQR(5));
printf("\nLargest Number: %d",LARGE(5,10));
return 0;
}
