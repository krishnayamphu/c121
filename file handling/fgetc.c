#include<stdio.h>
int main(){
FILE *f;
f=fopen("document.txt","r");
char ch=fgetc(f);
printf("Output: %c",ch);
fclose(f);
return 0;
}
