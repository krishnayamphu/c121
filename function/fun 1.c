#include<stdio.h>
void hello();
void message();
int main(){
hello();
return 0;
}
void message(){
    printf("\nHello World");
}
void hello(){
    message();
}
