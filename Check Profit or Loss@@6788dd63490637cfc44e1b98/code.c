#include<stdio.h>
int main() {
    float cp, sp;
    scanf("%f %f", &cp, &sp);
    if(sp>cp){
        printf("Profit");
    } else if ( cp>sp){
        printf("Loss");
    }else{
        printf("No Profit No Loss");
    }
    return 0;
}