#include<stdio.h>
#include<conio.h>
int main(){
int status=remove("data.txt");
if(status==0){
  printf("File deleted successfully");
}else{
    printf("File not found");
}

getch();
return 0;
}
