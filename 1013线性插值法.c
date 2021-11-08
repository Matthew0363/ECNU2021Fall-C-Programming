#include <stdio.h>
int main()
{
    double a, fa, b, fb, c, fc;
    scanf("%lf %lf %lf %lf %lf", &a, &fa, &b, &fb, &c);
    fc = (fb - fa) * (c - b) / (b - a) + fb;
    printf("%.3lf\n", fc);
    return 0;
}