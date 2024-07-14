#include<stdio.h>
int main(){
FILE *f;
f=fopen("demo.txt","r");
char ch;
while((ch=fgetc(f))!=EOF){
   printf("%c",ch);
}
fclose(f);
return 0;
}
