#include<stdio.h>
#include<conio.h>
FILE *f;
typedef struct{
char name[20];
float salary;
}Employee;

int main(){
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
getche();
return 0;
}
