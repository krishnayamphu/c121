#include<stdio.h>
int main(){
    char name[]="Ram";
    float nep=45, eng=70;
    float total=0, p=0;
    if(nep>=35&& eng>=35){
        total=nep+eng;
        p=total/2;

        printf("Name: %s\n",name);
        printf("Result: Pass\n");
        printf("Total: %0.2f\n",total);
        printf("Percentage: %0.2f\n",p);
        printf("Division: ");
        if(p>=80){
            printf("Distinction\n");
        }else if(p>=60){
            printf("First\n");
        }else if(p>=45){
            printf("Second\n");
        }else{
            printf("Third\n");
        }
    }else{
        printf("Fail");
    }
return 0;
}
