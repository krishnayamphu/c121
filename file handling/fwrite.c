#include<stdio.h>
typedef struct{
    char name[20];
    int age;
}Student;
FILE *f;
int main(){
Student s={"Ram",17};
f=fopen("students.txt","a+");
fwrite(&s,sizeof(s),1,f);
fclose(f);
printf("data inserted.");
return 0;
}
