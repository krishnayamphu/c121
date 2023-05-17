#include<stdio.h>
void getStudentInfo(char*,char*);
int main(){
char name[]="Ram", address[]="patan";
getStudentInfo(name,address);
return 0;
}
void getStudentInfo(char* name, char* address){
    printf("Student's Name: %s\n",name);
    printf("Student's Name: %s\n",address);
}
