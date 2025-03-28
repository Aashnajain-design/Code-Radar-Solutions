#include<stdio.h>
int main(){
    int x;
    scanf("%d", &x);
    if(x<=0){
        printf("Freezing");
    }if(x>0){
        printf("Above Freezing");
    }
    return 0;
}