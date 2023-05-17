#include<stdio.h>
int main(){
int a=5, *p,**ptr;
p=&a;
ptr=&p;

printf("%d-%d-%d",a,*p,**ptr);
return 0;
}
