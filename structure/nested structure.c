#include<stdio.h>
#include<string.h>
struct Address{
    char address[50];
    char city[30];
    char country[30];
};
typedef struct{
    char name[20];
    struct Address adr;
}Student;
int main(){
    Student s;
    strcpy(s.name,"Ram");
    strcpy(s.adr.address,"Patan");
    strcpy(s.adr.city,"Lalitpur");
    strcpy(s.adr.country,"Nepal");

    printf("Name: %s\n",s.name);
    printf("Address: %s %s, %s\n",s.adr.address,s.adr.city,s.adr.country);


return 0;
}

