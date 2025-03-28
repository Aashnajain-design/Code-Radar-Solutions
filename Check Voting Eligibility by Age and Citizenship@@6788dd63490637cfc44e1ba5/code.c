#include<stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    if(a>=18 && b==1){
        printf("Eligible");
    }if(a<=18 && b==0 || a<18 && b==1){
        printf("Not Eligible");
    }
    return 0;
}