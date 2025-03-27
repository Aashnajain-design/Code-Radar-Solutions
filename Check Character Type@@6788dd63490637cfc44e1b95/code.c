#include<stdio.h>
int main() {
    char ch;
    scanf("%c",  &ch);
    if(ch = 'a, e, i, o, u') {
        printf("vowel");
    } if (ch != 'a, e, i, ,o , u'){
        printf("consonant");
    } if (ch >='0' && ch<='9' ){
        printf("digit");
    }else{
        printf("special character");
    }
    return 0;
}