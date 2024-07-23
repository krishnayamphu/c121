void searchEmployee(){
    Employee e;
    char name[20];
    int count=0;
    f=fopen("emp.txt","r");
    if(f==NULL){
        printf("File not found!");
    }else{
        printf("Enter employee name:");
        scanf("%s",&name);
        while(fread(&e,sizeof(e),1,f)){
            if(strcmpi(name,e.name)==0){
                count=1;
                printf("\n:::::::::::::::: Existing Details :::::::::::::::::\n\n");
                printf(" Name \t\t\t\t\tSalary\n");
                printf("---------------------------------------------------\n");
                printf(" %-39s%0.2f\n",e.name,e.salary);
                printf("---------------------------------------------------\n");
            }
        }
        printf("count: %d",count);
        if(count==0){
            printf("\nEmployee data not found!\n");
        }
        fclose(f);
    }
}



