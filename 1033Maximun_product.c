#include <stdio.h>
#include <math.h>
int main()
{
    int n, i;
    long long int count;
    scanf("%d", &n);
    i = n % 3;
    if (n <= 3)
        printf("%d", n);
    if (n > 3)
    {
        switch (i)
        {
        case 0:
            count = pow(3, n / 3);
            break;
        case 1:
            count = pow(3, (n / 3 - 1)) * 4;
            break;
        case 2:
            count = pow(3, n / 3) * 2;
            break;
        }
        printf("%lld", count);
    }
}