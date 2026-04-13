#include <stdio.h>

int main()
{
    int currency;
    scanf("%d", &currency);
    if (currency >= 2000 || currency <= 1600)
        printf("Invalid input.");
    else
        currency % 2 == 0 ? printf("Even Currency") : printf("Odd Currency");
    return 0;
}
