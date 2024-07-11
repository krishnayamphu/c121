#include<stdio.h>
#include<string.h>

union Employee{
char name[20];
float salary;
};

int main(){
union Employee e;
printf("Union size: %d",sizeof(e));

return 0;
}
