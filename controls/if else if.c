#include<stdio.h>
int main(){
float p=50;

if(p>=90){
    printf("Excellent");
}else if(p>=75){
    printf("V. Good");
}else if(p>=60){
    printf("Good");
}else if(p>=45){
    printf("Satisfactory");
}else{
    printf("Poor");
}
return 0;
}

