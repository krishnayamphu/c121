#include<stdio.h>
#include<conio.h>
typedef struct{
    char name[20];
    int age;
}Student;
FILE *f;
int main(){
Student s;
f=fopen("students.txt","a+");
char next='y';
printf("Sutdent Details:");
printf("\n==============================\n");
while(next=='Y'||next=='y'){
    printf("\nStudent's Name: ");
    scanf("%s",&s.name);
    printf("Student's Age: ");
    scanf("%d",&s.age);
    fwrite(&s,sizeof(s),1,f);
    printf("Data inserted successfully.\n");
    printf("\nAdd another record? (Y/N): ");
    next=getche();
}
fclose(f);
return 0;
}
