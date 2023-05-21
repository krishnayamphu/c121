#include<stdio.h>
int main(){
FILE *f;
char name[20];
int age;
f=fopen("person.txt","r");
while(fscanf(f,"%s%d",&name,&age)!=EOF){
 printf("Name: %s\n",name);
 printf("Age: %d",age);
}
return 0;
}
