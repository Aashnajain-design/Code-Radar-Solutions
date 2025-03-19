#include<stdio.h>

int main()
{
    int num;  // Declare an integer variable to store the input number
    
    // Taking input from the user
    printf("");
    scanf("%d", &num);  // Read an integer from the user
    
    // Printing the number in different formats
    printf("Hexadecimal: %X\n", num);  // Print in uppercase hexadecimal
    printf("Octal: %o\n", num);  // Print in octal
    
    return 0;
}