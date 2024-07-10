#include<stdio.h>
#include<string.h>
struct Student{
char name[20];
int age;
};

int main(){
struct Student s[3];
int i,j;
for(i=0; i<3; i++){
    printf("Enter name:");
    scanf("%s",&s[i].name);
    printf("Enter age:");
    scanf("%d",&s[i].age);
}
printf("\n\n");
for(j=0;j<3; j++){
    printf("Student name: %s\n",s[j].name);
    printf("Student age: %d\n",s[j].age);
    printf("-----------------\n");
}


return 0;
}
