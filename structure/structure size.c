#include<stdio.h>
#include<string.h>

struct Student{
char name[20];
int age;
};

int main(){
struct Student s;

printf("Structure size: %d\n",sizeof(s));

return 0;
}
