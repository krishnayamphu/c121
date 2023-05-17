#include<stdio.h>
#include<string.h>
union Person{
    char name[20];
    int age;
};
int main(){
union Person p;
p.age=18;
printf("Age: %d",p.age);

strcpy(p.name,"Ram");
printf("\nName: %s",p.name);
return 0;
}
