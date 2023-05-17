#include<stdio.h>
int main(){
int a=5;
int *ptr;
ptr=&a;
printf("\nAddress value of ptr: %u",ptr);
ptr++;
printf("\nAddress value of ptr after increment: %u",ptr);


return 0;
}
