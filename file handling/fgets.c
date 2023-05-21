#include<stdio.h>
int main(){
FILE *f;
char data[20];
f=fopen("data.txt","r");

fgets(data,20,f);
printf("%s",data);
return 0;
}
