#include<stdio.h>
int main(){
FILE *f;
f=fopen("doc.txt","w");
fputc('a',f);
fclose(f);
printf("Data write successfully.");
return 0;
}
