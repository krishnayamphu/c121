#include<stdio.h>
int getMaxSpeed(); //#1: function declaration
int main(){
int speed=getMaxSpeed();
printf("Maximum Bike Speed Limit is: %d",speed); //#3: function calling
return 0;
}
int getMaxSpeed(){ //#2: function definition
   return 300;
}
