#include<stdio.h>
void sum(int x, int y); //function declaration
int main(){
sum(50,10); //function calling
sum(1000,500);
return 0;
}
//function definition
void sum(int x, int y){
    printf("Total sum: %d\n",(x+y));
}
