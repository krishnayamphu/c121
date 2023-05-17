#include<stdio.h>
typedef struct{
    char name[20];
    int rollno;
}Student;
int main(){
    Student s={"Hari",10};
    printf("Name: %s\n",s.name);
    printf("Rollno: %d",s.rollno);

return 0;
}
