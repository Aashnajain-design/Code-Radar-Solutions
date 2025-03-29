#include<stdio.h>
int main(){
    int rows, i, j,spaces;
    printf("");
    scanf("%d",&n);
    for(i=1; i<=rows; i++){
        for(spaces=1; spaces<= rows-i; spaces++){
        printf(" ");
        }for(j=1; j<=2*i-1; j++){
            printf("* ");
        }
        printf("\n");
    }
    for(i = rows - 1; i>=1; i--){
        for(spaces =1; spaces <=rows-i; spaces++ ){
            printf(" ");
        }for(j=1; j<=2*i-1; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}