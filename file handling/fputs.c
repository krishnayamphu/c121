#include<stdio.h>
int main(){
FILE *f;
f=fopen("data.txt","w");
fputs("welcome",f);
printf("Data write successfully");
return 0;
}
