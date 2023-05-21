#include<stdio.h>
int main(){
    if(rename("data.txt","doc.txt")==0){
        printf("file renamed successfully");
    }else{
        printf("file can't rename");
    }
return 0;
}
