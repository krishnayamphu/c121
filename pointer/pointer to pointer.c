#include<stdio.h>

int main(){
int a=5;
int *p, **ptr;
p=&a;
ptr=&p;

printf("Value of a: %d\n",a);
printf("Value of p: %d\n",*p);
printf("Value of ptr: %d\n",**ptr);
return 0;

}

