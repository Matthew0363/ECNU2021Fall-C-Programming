#include <stdio.h>
int main()
{
    double fahr, cels;
    scanf("%lf", &cels);
    fahr = 1.8 * cels + 32;
    printf("celsius=%f, fahrenheit=%f\n", cels, fahr);
    return 0;
}