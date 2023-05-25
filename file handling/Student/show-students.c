void showStudents(){
    Student s;
    f=fopen("students.txt","r+");
    if(f==NULL){
        printf("\nFile not found!.");
    }else{
    printf("Sutdent Details:");
    printf("\n==============================\n");
        while(fread(&s,sizeof(s),1,f)){
            printf("Student's Name: %s\n",s.name);
            printf("Student's Age: %d",s.age);
            printf("\n---------------------------\n");
        }
    }
    fclose(f);
}
