#include<stdio.h>
typedef struct{
    char name[20];
    int age;
}Student;
FILE *f;
int main(){
Student s;
f=fopen("students.txt","r+");
while(fread(&s,sizeof(s),1,f))
{
    printf("Name: %s\n",s.name);
    printf("Age: %d\n",s.age);
}
fclose(f);

return 0;
}
