#include<stdio.h>
#include<string.h>
int main(){
char s1[]="Ram";
char s2[] ="ram";
char s3[]="Ram";

printf("%d",strcmpi(s1,s2));
printf("\n%d",strcmpi(s1,s3));
return 0;
}
