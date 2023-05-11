#include<stdio.h>
#include<string.h>
int main(){
char username[20],password[20];
printf("Enter username:");
scanf("%s",&username);
printf("Enter password:");
scanf("%s",&password);
if(strcmpi(username,"admin")==0 && strcmp(password,"a123")==0){
    printf("Welcome Admin.");
}else{
    printf("Invalid username or password");
}
return 0;
}
