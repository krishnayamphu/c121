#include<stdio.h>
#include<string.h>
struct Address{
char city[50];
char state[50];
char country[50];
};
struct Student{
char name[20];
int age;
struct Address addr;
};

int main(){
struct Student s;
strcpy(s.name,"Rohan");
strcpy(s.addr.city,"Lalitpur");
strcpy(s.addr.state,"Bagmati");
strcpy(s.addr.country,"Nepal");
s.age=25;

printf("Student name: %s\n",s.name);
printf("Student age: %d\n",s.age);
printf("Student Address: %s, %s, %s",s.addr.city,s.addr.state,s.addr.country);


return 0;
}
