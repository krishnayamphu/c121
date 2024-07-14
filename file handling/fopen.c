#include<stdio.h>
int main(){
FILE *f;
f=fopen("document.txt","w");
printf("File created.");
fclose(f);
return 0;
}
