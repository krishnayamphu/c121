#include<stdio.h>
int main(){
int a=5,b=10;
int *const ip=&a;

/*
ip=&a;
ip=&b;
*/
printf("%d",*ip);
return 0;
}
