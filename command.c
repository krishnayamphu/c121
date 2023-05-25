#include<stdio.h>
#include<string.h>
void show(){
    printf("\nShowing some data\n");
}
void update(){
    printf("\nUpdating some data\n");
}
void read(){
 int num;
 printf("Enter number:");
 scanf("%d",&num);
 printf("Number: %d",num);
}
int main(int argc, char *argv[]){
if(argc<2){
      printf("No argument passed through command line.\n");
}else{
    if(strcmpi(argv[1],"show")==0){
        show();
    }else if(strcmpi(argv[1],"update")==0){
        update();
    }else if(strcmpi(argv[1],"read")==0){
        read();
    }else{
        printf("\nInvalid command\n");
        printf("\nUse command Any of them: show, update, read\n");
    }
}
return 0;
}
