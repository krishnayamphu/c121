#include<stdio.h>
void test(int n[5]);
int main(){
int num[]={10,20,30,40,50};
test(num);
}

void test(int n[5]){
    int i,j;
    for(i=0; i<5; i++){
        printf("%d\n",n[i]);
    }
}
