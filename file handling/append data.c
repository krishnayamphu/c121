#include<stdio.h>
int main(){
FILE *f;
f=fopen("test.txt","a");
char ch;
printf("Type some text:");
while((ch=getchar())!='\n'){ //13=\n=enter key
   fputc(ch,f);
}
printf("Data append succssfully");
fclose(f);
return 0;
}
