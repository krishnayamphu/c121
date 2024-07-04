#include<stdio.h>
int main(){
int num[]={100,200,300};
char vowels[]={'a','e','i','o','u'};
char name[]="Ram";
int i;
printf("num: %d\n\n",num[0]);
for(i=0; i<3; i++){
  printf("%d, ",num[i]);
}
printf("\n");
for(i=0; i<5; i++){
  printf("%c, ",vowels[i]);
}

printf("\nName: %s",name);
return 0;
}
