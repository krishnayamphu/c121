#include<stdio.h>
#define AGE 2
int main(){
#if AGE >=18
 printf("You are eligible to vote");
#else
 printf("Sorry, You are not eligible for voting");
#endif // AGE
return 0;
}
