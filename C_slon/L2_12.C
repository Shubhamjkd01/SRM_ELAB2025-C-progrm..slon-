#include <stdio.h>

int main()
{
    int cp, sp;
    scanf("%d%d", &cp, &sp);
    if (cp >= 3270 || cp <= 1940 || sp >= 7050 || sp <= 1460)
        printf("Invalid input.");
    else if(sp > cp)
        printf("Profit");
    else if (cp > sp)
        printf("Loss");
    else
        printf("No Profit No Loss");
    return 0;
}
