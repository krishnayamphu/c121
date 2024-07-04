#include<stdio.h>
int main(){
char name[20];
start:
printf("Enter name:");
scanf("%s",&name);

printf("Your name: %s\n\n",name);
goto start;
return 0;
}
