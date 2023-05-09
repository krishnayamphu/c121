#include<stdio.h>
int x=100; //global variable
void test();
int main(){
int a=5;
test();
return 0;
}
void test(){
    int a=10;
    printf("%d",a); //compile time error
    printf("\n%d",x);
}
