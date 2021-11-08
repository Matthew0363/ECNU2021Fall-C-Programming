#include <stdio.h>
#include <math.h>
int main()
{
    int d, p, r, m1;
    double m;
    scanf("%d%d%d", &d, &p, &r);
    m = log10(p / (p - d * 0.01 * r)) / log10(1 + 0.01 * r);
    m1 = (int)(m + 0.5);
    printf("%d\n", m1);
    return 0;
}