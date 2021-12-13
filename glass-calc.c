#include <stdio.h>

int main()
{
    int iOneGlassOz = 8;
    float iUserOz = 0, iResult = 0;
    printf("How many oz. you would like: ");
    scanf("%f", &iUserOz);
    iResult = iUserOz / iOneGlassOz;
    printf("This is %.1f glasses", iResult);

    return 0;
}