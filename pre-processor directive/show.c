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
