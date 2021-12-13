#include <stdio.h>

int main()
{
    float fUserInput = 0, fResult = 0, fMoonGravity = 0.165;
    printf("Please enter your weight (kg): ");
    scanf("%f", &fUserInput);
    fResult = fUserInput * fMoonGravity;
    printf("Your weight on the moon will be: %.3f kg.", fResult);

    return 0;
}