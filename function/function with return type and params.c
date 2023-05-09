#include<stdio.h>
float getDiscount(float amount, float p);
int main(){
printf("Discount Amount: %0.2f",getDiscount(1420,10));
return 0;
}
float getDiscount(float amount, float p){
    return (amount*p)/100;
}
