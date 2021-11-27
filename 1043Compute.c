#include <stdio.h>
#include <math.h>

double sum(int n)
{
    if (n == 1)
        return 1;
    else
        return sum(n - 1) - pow(-1, n) / n;
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%f\n", sum(n));
    return 0;
}