#include<stdio.h>

int main()
{
    int a, b;  // Declare two integer variables to store the input values
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);  // Read two integers from the user
    
    int sum = a + b;  // Calculate the sum of the two integers
    printf("Sum: %d\n", sum);  // Print the sum
    
    return 0;
}