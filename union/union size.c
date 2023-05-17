#include<stdio.h>
#include<string.h>
union Person{
    char name[20];
    int age;
};
int main(){
union Person p;
printf("size of p: %d",sizeof(p));
return 0;
}
