#include <stdio.h>
int main()
{
    double fahr, cels;
    scanf("%lf", &fahr);
    cels = (fahr - 32) * 5 / 9;
    printf("fahrenheit=%f, celsius=%f\n", fahr, cels);
    return 0;
}