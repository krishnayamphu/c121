#include<stdio.h>
int main(){
FILE *f;
char ch;
f=fopen("data.txt","w");
printf("Write some data: ");
while((ch=getchar())!='\n'){
    fputc(ch,f);
}
fclose(f);
printf("Data write successfully");
return 0;
}
