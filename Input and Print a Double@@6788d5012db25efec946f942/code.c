#include<stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_NUMERIC, "C"); // Sets the locale to "C" (dot as the decimal separator)

    float a = 3.1415;
    scanf("%f", &a);
    printf("You entered: %.4f\n", a);
    return 0;
}
