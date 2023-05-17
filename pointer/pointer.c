#include<stdio.h>
int main(){
int a=5;
int *ptr;
ptr=&a;

printf("Value of a: %d\n",a);
printf("Value of ptr: %d\n",*ptr);

printf("\nAddress of a: %u",&a);
printf("\nAddress value of ptr: %u",ptr);

return 0;
}
