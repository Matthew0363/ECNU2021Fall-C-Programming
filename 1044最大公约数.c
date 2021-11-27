#include <stdio.h>

int GCD(int m, int n)
{
    if (n == 1 || m == 1 || m == n)
        return 1;
    else if (m % n == 0)
        return n;
    else if (n % m == 0)
        return m;
    else
    {
        if (m > n)
        {
            m = m % n;
            return GCD(m, n);
        }
        else
        {
            n = n % m;
            return GCD(m, n);
        }
    }
}

int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    printf("GCD(%d,%d)=%d\n", m, n, GCD(m, n));
    return 0;
}