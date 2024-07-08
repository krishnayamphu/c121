#include<stdio.h>
int main(){
int a=5;
int *ip;
ip=&a;

printf("\naddress value of ip: %u",ip);
ip++;
printf("\naddress value of ip after increment: %u",ip);
return 0;
}
