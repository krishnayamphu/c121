#include<stdio.h>
int main(){
int a=5;
float f=10.5;

int *ip;
float *fp;
void *ptr;

//fp=ip;
//ip=fp;

//ptr=ip;
//ptr=fp;
ptr=&a;
printf("%d",ptr);
return 0;
}
