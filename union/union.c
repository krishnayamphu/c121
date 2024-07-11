#include<stdio.h>
#include<string.h>

union Employee{
char name[20];
float salary;
};

int main(){
union Employee e;
strcpy(e.name,"Ram");
e.salary=20000;

printf("Name: %s\n",e.name);
printf("Salary: %0.2f\n",e.salary);

return 0;
}
