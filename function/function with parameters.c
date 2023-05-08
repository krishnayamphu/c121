#include<stdio.h>
void sum(int x, int y);
int main(){
sum(5,10);
sum(50,100);
return 0;
}
void sum(int x, int y){
   printf("Total sum: %d\n",(x+y));
}
