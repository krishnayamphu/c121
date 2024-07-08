#include<stdio.h>
#include<string.h>
int main(){
static int i=1;
printf("hello world\n");
i++;
if(i<=5){
    main();
}
return 0;
}
