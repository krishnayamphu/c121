#include<stdio.h>
#include<string.h>
int main(){
char name[]="Aptech",cname[10];
char s1[]="abc",s2[]="xyz",s3[]="ABC",s4[]="abc";
printf("String length: %d\n",strlen(name));
printf("%s\n",strupr(name));
strcpy(cname,name);
printf("Name: %s\n",cname);
strrev(name);
printf("Reverse: %s\n",name);
printf("String are equal: %d\n",strcmp(s1,s4));
printf("String are not equal: %d\n",strcmp(s1,s2));
printf("String are equal with ignoring case: %d\n",strcmpi(s1,s3));
return 0;
}
