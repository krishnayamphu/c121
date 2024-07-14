#include<stdio.h>
FILE *f;
typedef struct{
char name[20];
float salary;
}Employee;

int main(){
Employee e={"Hari", 20000};
f=fopen("emp.txt","w");
fwrite(&e,sizeof(e),1,f);
fclose(f);
printf("Employee Data Added.");

return 0;
}
