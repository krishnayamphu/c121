#include<stdio.h>
void hello(); //#1: function declaration
int main(){
hello(); //#3: function calling
return 0;
}
void hello(){ //#2: function definition
    printf("Hello World.\n");
}
