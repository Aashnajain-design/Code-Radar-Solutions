#include<stdio.h>
int main() {
    int a,b, c;
    scanf("%d %d %d", &a,&b, &c);
    if (a==b && b==c && a==c){
        printf("Equilateral");
    }if (a==b && a!=c && b!=c){
        printf("Isosceles");
    }if ( a!=b && b!= c && a!=c){
        printf("Scalene");
    }
    return 0;
}