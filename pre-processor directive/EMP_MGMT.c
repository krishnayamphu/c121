#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
FILE *f,*fp;
#include "employee.c"
#include "menu.c"
#include "show.c"
#include "add.c"
#include "edit.c"
#include "delete.c"
int main(){
    int choice;
    while(1){
        system("cls");
        menu();
        scanf("%d",&choice);
        switch(choice){
        case 1:
            showEmployee();
            getch();
            break;
        case 2:
            addEmployee();
            getch();
            break;
        case 3:
            editEmployee();
            getch();
            break;
        case 4:
            deleteEmployee();
            getch();
            break;
        case 5:
            printf("Press any KEY to continue");
            exit(0);
            break;
        default:
            printf("Invalid choice number");
            getch();
            break;
        }
    }
    getche();
    return 0;
}



