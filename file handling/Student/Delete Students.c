#include<stdio.h>
#include<conio.h>
typedef struct{
    char name[20];
    int age;
}Student;
FILE *f,*fp;
int main(){
Student s;
char name[20];
f=fopen("students.txt","r+");
fp=fopen("temp.txt","w+");
printf("Delete Student Name:");
scanf("%s",&name);

while(fread(&s,sizeof(s),1,f)){
   if(strcmpi(s.name,name)==0){
        continue;
   }
   else{
    fwrite(&s,sizeof(s),1,fp);
   }
}
fclose(f);
fclose(fp);
remove("students.txt");
rename("temp.txt","students.txt");
printf("file deleted");
return 0;
}
