#include<stdio.h>
int main(){
FILE *f;
char name[]="ram";
int age=20;
char name1[]="sita";
int age1=18;

f=fopen("person.txt","a+");
fprintf(f,"%s\t%d\n",name,age);
fprintf(f,"%s\t%d\n",name1,age1);
printf("Data written successfully");
fclose(f);
return 0;
}
