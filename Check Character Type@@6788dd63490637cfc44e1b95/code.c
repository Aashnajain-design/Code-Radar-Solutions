#include<stdio.h>
int main() {
    char ch;
    scanf("%c",  &ch);
    if(ch = 'aeiou') {
        printf("vowel");
    } if (ch != 'aeiou'){
        printf("consonant");
    } if (ch >='0' && ch<='9' ){
        printf("digit");
    }else{
        printf("special character");
    }
    return 0;
}