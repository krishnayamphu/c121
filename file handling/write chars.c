#include<stdio.h>
int main(){
FILE *f;
f=fopen("test.txt","w");
char ch;
printf("Type some text:");
while((ch=getchar())!='\n'){ //13=\n=enter key
   fputc(ch,f);
}
printf("Data written succssfully");
fclose(f);
return 0;
}
