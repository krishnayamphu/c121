#include<stdio.h>
int main(){
char ch;
printf("Type some text:");
while((ch=getchar())!='\n'){
    printf("%c",ch);
}
return 0;
}
