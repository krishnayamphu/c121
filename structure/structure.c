#include<stdio.h>
#include<string.h>
struct Person{
char name[20];
int age;
};
int main(){
struct Person p;
p.age=20;
strcpy(p.name,"Ram");

printf("Name: %s",p.name);
printf("\nAge: %d",p.age);
return 0;
}
