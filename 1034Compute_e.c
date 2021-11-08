#include <stdio.h>
int main()
{
    int n = 1;
    double e = 1, f = 1;
    while (1 / f >= 1e-6)
    {
        f = f * n;
        e = e + 1 / f;
        n++;
    }
    printf("%lf\n", e);
    return 0;
}
