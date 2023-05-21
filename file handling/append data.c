#include<stdio.h>
int main(){
FILE *f;
char ch;
f=fopen("doc.txt","a+");
fputc('c',f);
printf("Data write successfully");
return 0;
}
