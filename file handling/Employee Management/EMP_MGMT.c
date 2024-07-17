#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
FILE *f;
typedef struct{
char name[20];
float salary;
}Employee;

void menu();
void showEmployee();
void addEmployee();

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

void menu(){
printf(":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
printf("::::::::::::::::::::::::: EMPLOYE MENAGEMENT SYS. :::::::::::::::::::::::::::\n");
printf(":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
printf("::::::::::::::::::::::::::::::::: MENU ::::::::::::::::::::::::::::::::::::::\n");
printf(":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
    printf("\t1. View All Employee\n");
    printf("\t2. Add Employee\n");
    printf("\t3. Update Employee\n");
    printf("\t4. Delete Employee\n");
    printf("\t5. Exit\n");

printf("\nEnter choice (1-5): ");
}

void showEmployee(){
    Employee e;
    f=fopen("emp.txt","r");
    if(f==NULL){
        printf("File not found!");
    }else{
        printf("\n::::::::::::::::: All Employees :::::::::::::::::::\n\n");
        printf(" Name \t\t\t\t\tSalary\n");
        printf("---------------------------------------------------\n");
        while(fread(&e,sizeof(e),1,f)){
            printf(" %-39s%0.2f\n",e.name,e.salary);
            printf("---------------------------------------------------\n");
        }
    }
    fclose(f);
}

void addEmployee(){
    Employee e;
    f=fopen("emp.txt","a+");
    char next='y';
    while(next=='y'||next=='Y'){
        printf("\nName: ");
        scanf("%s",&e.name);
        printf("Salary: ");
        scanf("%f",&e.salary);
        fwrite(&e,sizeof(e),1,f);
        printf("\nAdd another record? (Y/N):");
        next=getche();
    }
    printf("\nData written successfully.");
    fclose(f);
}



