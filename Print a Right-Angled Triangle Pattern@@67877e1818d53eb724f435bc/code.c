#include<stdio.h>
int main(){
    int rows, i, j;
    printf("");
    scanf("%d", &rows);
    for( i  = rows; i=1; i++){
        for(j>=i; j--){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}