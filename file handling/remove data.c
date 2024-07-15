#include<stdio.h>
#include<string.h>
FILE *f,*fp;
typedef struct{
char name[20];
float salary;
}Employee;

int main(){
Employee e;
char name[20];
f=fopen("emp.txt","r");
fp=fopen("temp.txt","w");

printf("Enter delete name:");
scanf("%s",&name);

while(fread(&e,sizeof(e),1,f)){
    if(strcmpi(name,e.name)==0){
        continue;
    }
    fwrite(&e,sizeof(e),1,fp);
}
fclose(f);
fclose(fp);
remove("emp.txt");
rename("temp.txt","emp.txt");
printf("Data Deleted Successfully.");
return 0;
}
