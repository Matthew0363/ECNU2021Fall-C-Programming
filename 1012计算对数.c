#include <stdio.h>
#include <math.h>
int main()
{
    int b;
    double x, c;
    scanf("%d %lf", &b, &x);
    c = log(x) / log(b);
    printf("%lf\n", c);
    return 0;
}