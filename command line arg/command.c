#include<stdio.h>
int main(int argc, char* argv[]){
    printf("Filename: %s\n\n",argv[0]);

    if(argc<2){
        printf("no arg found");
    }else{
        printf("%s",argv[1]);
    }
    return 0;
}



