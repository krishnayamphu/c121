#include<stdio.h>
int main(){
FILE *f;
char name[20];
int age;

f=fopen("person.txt","r");
while((fscanf(f,"%s%d",&name,&age))!=EOF){
  printf("%s\t%d\n",name,age);
}

fclose(f);
return 0;
}
