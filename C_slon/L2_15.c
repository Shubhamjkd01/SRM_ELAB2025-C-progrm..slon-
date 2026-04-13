#include <stdio.h>

int main()
{
    float celsius, fahrenheit;
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) * 5 / 9;
    printf("%.2f Centigrade\n", celsius);
    if(celsius >=1000)
        printf("Invalid Input");
    else if (celsius >= 100)
        printf("Very Hot");
    else if (celsius >= 50)
        printf("Hot");
    else
        printf("Moderate");
    return 0;
}
