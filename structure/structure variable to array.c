#include<stdio.h>
typedef struct{
    char name[20];
    int rollno;
}Student;
int main(){
    Student s[5];
    int i,j;
    for(i=0; i<5; i++){
        printf("Student name: ");
        scanf("%s",&s[i].name);
        printf("Student rollno.: ");
        scanf("%d",&s[i].rollno);
    }
    printf("\n\n");

    for(j=0; j<5; j++){
        printf("Student name: %s\n",s[j].name);
        printf("Student rollno.: %d\n",s[j].rollno);
        printf("--------------------\n");
    }
return 0;
}

