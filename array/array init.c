#include<stdio.h>
int main(){
int num[]={100,200,300,400,500};
char vowels[]={'a','e','i','o','u'};
int i,j;

for(i=0; i<5; i++){
  printf(" %d \n",num[i]);
}
printf("\n------------------------\n");
for(j=0; j<5; j++){
  printf(" %c \n",vowels[j]);
}
return 0;
}
