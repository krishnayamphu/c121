#include<stdio.h>
int main(){
float marks;
printf("Enter marks value:");
scanf("%f",&marks);
if(marks>=90)
{
    printf("Excellent");
}else if(marks>=75){
    printf("Very Good");
}else if (marks>=60){
    printf("Good");
}else if (marks>=45){
    printf("Satisfactory");
}else{
    printf("Poor");
}
return 0;
}
