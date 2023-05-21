#include<stdio.h>
#include<conio.h>
typedef struct{
    char name[20];
    int age;
}Student;
FILE *f;
int main(){
Student s;
f=fopen("students.txt","r+");
printf("Sutdent Details:");
printf("\n==============================\n");
while(fread(&s,sizeof(s),1,f)){
    printf("Student's Name: %s\n",s.name);
    printf("Student's Age: %d",s.age);
    printf("\n---------------------------\n");
}
fclose(f);
return 0;
}
