#include<stdio.h>
#include<string.h>
int main(){
char fname[]="Ram";
char lname[] ="Rana";
char cname[]="ABC Company";
char name[20];

strcat(fname,lname);
strcpy(name,cname);
printf("\nName: %s",fname);
printf("\nName: %s",name);
return 0;
}

