#include <stdio.h>

int main()
{
    float number1, number2, diff;
    scanf("%f %f", &number1, &number2);
    diff = number1 - number2;
    if (diff < 0)
        diff = -diff;
    if ((number1 < 1.0 || number1 > 50.0) || (number2 < 1.0 || number2 > 50.0))
        printf("Invalid input.\n");
    if (diff <= 0.5)
        printf("Approximate Number");
    else
        printf("Not an Approximate Number");
    return 0;
}
