#include<stdio.h>
typedef struct{
    char name[20];
    int rollno;
}Student;
void studentInfo(Student s);
int main(){
    Student s;
    printf("Student name: ");
    scanf("%s",&s.name);
    printf("Student rollno.: ");
    scanf("%d",&s.rollno);

    studentInfo(s);
return 0;
}
void studentInfo(Student s){
    printf("Name: %s\n",s.name);
    printf("Rollno: %d\n",s.rollno);
}
