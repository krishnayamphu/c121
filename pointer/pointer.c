#include<stdio.h>
int main(){
int a=5;
int *ip;
float temp=29.5;
float *fp;
ip=&a;
fp=&temp;

printf("%d",*ip);
printf("\naddress of a: %u",&a);
printf("\naddress value of ip: %u",ip);


printf("\n\nvalue of fp: %0.2f",*fp);
printf("\n\naddress value of fp: %u",fp);

return 0;
}
