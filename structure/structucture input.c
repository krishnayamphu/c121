#include<stdio.h>
#include<string.h>
struct Student{
char name[20];
int age;
};

int main(){
struct Student s;
printf("Enter name:");
scanf("%s",&s.name);
printf("Enter age:");
scanf("%d",&s.age);

printf("Student name: %s\n",s.name);
printf("Student age: %d",s.age);

return 0;
}
