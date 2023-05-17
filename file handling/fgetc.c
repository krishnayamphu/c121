#include<stdio.h>
int main(){
FILE *f;
f=fopen("doc.txt","r");
char ch=fgetc(f);
fclose(f);
printf("%c",ch);
return 0;
}
