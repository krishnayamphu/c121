#include<stdio.h>
int main(){
FILE *f;
f=fopen("document.txt","w");
fputc('B',f);
printf("Data written successfully.");
fclose(f);
return 0;
}
