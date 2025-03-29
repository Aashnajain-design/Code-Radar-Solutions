#include<stdio.h>
int main(){
    int rows, i, j, spaces;
    printf("");
    scanf("%d",&rows);
    for(i=1; i<=rows; i++){
        for(spaces=1; spaces= rows-i; spaces++){
            printf(" ");
        }
            for(j=1;j<=i; j++){
        printf("* ");
            }
            printf("\n");
    }
    return 0;
}