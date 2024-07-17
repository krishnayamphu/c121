#include<stdio.h>
int main(){
FILE *f;
f=fopen("demo.txt","r");
char ch;
if(f==NULL){
    printf("\nFile not found!");
}else{
    while((ch=fgetc(f))!=EOF){
   printf("%c",ch);
}
}

fclose(f);
return 0;
}
