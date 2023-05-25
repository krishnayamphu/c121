#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
FILE *f;
#include "student.c"
#include "menu.c"
#include "show-students.c"
#include "add-students.c"

int main(){
    int choice;
    while(1){
    system("cls");
    menu();
    scanf("%d",&choice);
        switch(choice){
        case 1:
            showStudents();
            getch();
            break;

        case 2:
            addStudent();
            getch();
            break;

        case 6:
            printf("Press ANY KEY to Continue.");
            exit(0);
            break;

        default:
            printf("Invalid choice no.");
            getch();
            break;

        }
    }
return 0;
}
