#include <stdio.h>

int main()
{
    float fUserInput = 0, fJupeterOneYear = 4380, fResult = 0;
    printf("Please enter days on earth: ");
    scanf("%f", &fUserInput);
    fResult = fUserInput / fJupeterOneYear;
    printf("The Jupeter year's will be: %.3f", fResult);

    return 0;
}