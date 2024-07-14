#include<stdio.h>
FILE *f;
typedef struct{
char name[20];
float salary;
}Employee;

int main(){
Employee e;
f=fopen("emp.txt","r");
while(fread(&e,sizeof(e),1,f)){
    printf("%s\t%0.2f\n",e.name,e.salary);
}
fclose(f);

return 0;
}
