#include<stdio.h>
int main(){
FILE *f;
char ch;
f=fopen("document.txt","r");
if(f==NULL){
    printf("\aFile not found!");
}else{
    printf("File is ready to read");
}
return 0;
}
