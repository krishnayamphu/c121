void editEmployee(){
    Employee e;
    char name[20];
    char confirm='N';
    int count=0;
    fp=fopen("temp.txt","w");
    f=fopen("emp.txt","r");
    if(f==NULL){
        printf("File not found!");
    }else{
        printf("Enter update name:");
        scanf("%s",&name);
        while(fread(&e,sizeof(e),1,f)){
            if(strcmpi(name,e.name)==0){
                count=1;
                printf("\n:::::::::::::::: Existing Details :::::::::::::::::\n\n");
                printf(" Name \t\t\t\t\tSalary\n");
                printf("---------------------------------------------------\n");
                printf(" %-39s%0.2f\n",e.name,e.salary);
                printf("---------------------------------------------------\n");
                printf("\n\nAre you sure update this record? (Y/N):");
                confirm=getche();
                if(confirm=='Y'||confirm=='y'){
                        printf("\nEnter new name:");
                        scanf("%s",&e.name);
                        printf("Enter new salary:");
                        scanf("%f",&e.salary);
                        fwrite(&e,sizeof(e),1,fp);
                        printf("Data updated!");
                }else{
                    fwrite(&e,sizeof(e),1,fp);
                }
            }else{
                fwrite(&e,sizeof(e),1,fp);
            }

        }
        printf("count: %d",count);
        if(count==0){
            printf("\nEmployee data not found!\n");
        }
        fclose(f);
        fclose(fp);
        remove("emp.txt");
       rename("temp.txt","emp.txt");
    }
}
