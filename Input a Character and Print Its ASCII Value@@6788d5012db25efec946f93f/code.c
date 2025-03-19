#include<stdio.h>

int main()
{
    char c;  // Declare a character variable
    printf("");
    scanf("%c", &c);  // Read a single character from the user
    
    printf("ASCII value: %d\n", c, c);  // Print the ASCII value using %d for integer representation
    
    return 0;
}