#include<stdio.h>
#include<string.h>
typedef struct{
char name[20];
int age;
}Student;

int main(){
Student s={"Hari",20};

printf("Student name: %s\n",s.name);
printf("Student age: %d\n",s.age);

return 0;
}
