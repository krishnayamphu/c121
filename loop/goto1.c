#include<stdio.h>
int main(){
int n=0;
if(n==1){
    goto ok;
}else{
    goto cancel;
}
ok:
printf("true");
goto end;
cancel:
printf("false");
end:
return 0;
}
