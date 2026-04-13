#include<stdio.h>

int main()
{
    char operator;
    double n1, n2;
    double r;

    scanf(" %c%lf%lf", &operator, &n1, &n2);

    if ((n1 < 1) + (n1 > 500) + (n2 < 1) + (n2 > 500))
        return !printf("Invalid input.");
    else
        switch (operator)
        {
            case '+': r = n1 + n2; break;
            case '-': r = n1 - n2; break;
            case '*': r = n1 * n2; break;
            case '/': r = n1 / n2; break;
            default: puts("Invalid input."); return 0;
        }

    printf(r == (int)r ? "%.0lf" : "%.1lf", r);
    return 0;
}
