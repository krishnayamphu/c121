#include<stdio.h>
#include<conio.h>
int main(){
int status=rename("data.txt","doc.txt");
if(status==0){
  printf("File renamed successfully");
}else{
    printf("File not found");
}

getch();
return 0;
}
