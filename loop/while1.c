#include<stdio.h>
int main(){
char ch;
printf("Type something:");
while((ch=getchar())!='\n'){
    printf("%c",ch);
}
return 0;
}
