#include<stdio.h>
float getDiscountAmt(float price, float percentage); //function declaration
int main(){
printf("Discount Amount: %0.2f\n",getDiscountAmt(1000,5)); //function calling

return 0;
}
//function definition
float getDiscountAmt(float price, float percentage){
    return (price*percentage/100);
}
