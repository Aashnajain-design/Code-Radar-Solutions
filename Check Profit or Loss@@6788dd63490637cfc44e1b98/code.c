#include<stdio.h>
int main() {
    int sp;
    scanf("%d", &sp);
    int cp;
    scanf("%d", &cp);
    if(sp>cp){
        printf("Profit");
    }if ( cp>sp){
        printf("Loss");
    }
    return 0;
}