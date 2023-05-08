#include<stdio.h>
int main(){
char name[20];
int age;
start:
    printf("Enter name:");
    scanf("%s",&name);
    printf("Enter age:");
    scanf("%d",&age);

    printf("\nName: %s",name);
    printf("\nAge: %d\n\n",age);
    goto start;
return 0;
}
