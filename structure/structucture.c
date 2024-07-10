#include<stdio.h>
#include<string.h>
struct Student{
char name[20];
int age;
};

int main(){
struct Student s;
s.age=20;
strcpy(s.name,"Ram");


printf("Student name: %s\n",s.name);
printf("Student age: %d",s.age);
return 0;
}
