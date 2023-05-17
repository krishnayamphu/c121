#include<stdio.h>
int main(){
FILE *f;
f=fopen("doc.jpg","w");
fclose(f);
printf("File created successfully.");
return 0;
}
