#include<stdio.h>
int main(){
    if(remove("students.txt")==0){
        printf("file deleted");
    }else{
        printf("file not found");
    }

return 0;
}
