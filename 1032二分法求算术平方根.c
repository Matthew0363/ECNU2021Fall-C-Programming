#include <stdio.h>
#include <math.h>
int main()
{
    double x, l = 0, r, mid;
    scanf("%lf", &x);
    if (x == 0)
        ;
    else
        r = (x > 1 ? x : 1);
    mid = (l + r) / 2;
    while (fabs(mid * mid - x) > 1e-6)
    {
        if (mid * mid > x)
            r = mid;
        else
            l = mid;
        mid = (l + r) / 2;
    }
    printf("%.8lf", mid);
    return 0;
}
