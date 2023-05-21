#include<stdio.h>
int main(){
FILE *f;
char name[]="Ram";
int age=20;
f=fopen("person.txt","w");
fprintf(f,"%s\t%d\n",name,age);
printf("Data write successfully");
return 0;
}
