#include<stdio.h>
struct Employee{
    char name[20];
    float salary;
};
int main(){
struct Employee e;
printf("Size of e: %d",sizeof(e));
return 0;
}
