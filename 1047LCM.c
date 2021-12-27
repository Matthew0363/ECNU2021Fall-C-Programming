/*
在算术中，两个整数a和b的最小公倍数LCM(通常用LCM (a, b)表示)是能被a和b整除的最小正整数。
例如，4和6的LCM是12。
写一个函数LCM()，它计算n个整数a1,a2，…an，
*/

#include <stdio.h>
#define N 9

long long gcd(long long a, long long b)
{
    if (a < b)
    {
        long long t = a;
        a = b;
        b = t;
    }
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    int n;
    long long r = 1;
    int a;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        r = r * a / gcd(r, a);
    }

    printf("%lld\n", r);
    return 0;
}