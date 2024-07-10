#include<stdio.h>
#include<string.h>
typedef struct{
char name[20];
int age;
}Student;
void studentInfo(Student s);
int main(){
Student s={"Hari",20};
Student s1={"Sita",19};

studentInfo(s);
studentInfo(s1);
return 0;
}
void studentInfo(Student s){
    printf("Student name: %s\n",s.name);
    printf("Student age: %d\n",s.age);
}
