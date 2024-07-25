#include<stdio.h>
#include<string.h>
void hello(){
    printf("Hello, How are you?");
}
void bye(){
    printf("Good bye!, See you again.");
}
int main(int argc, char* argv[]){
    if(argc<2){
        printf("no args found");
    }else{
        if(strcmpi(argv[1],"hello")==0){
            hello();
        }
        else if(strcmpi(argv[1],"bye")==0){
            bye();
        }else{
            printf("Invalid command");
        }
    }
    return 0;
}



