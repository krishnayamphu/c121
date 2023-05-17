#include<stdio.h>
int main(){
int x=5, y=10;
int* const ptr=&x;
ptr=&y;

return 0;
}
