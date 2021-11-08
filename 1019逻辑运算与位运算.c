#include <stdio.h>
int main()
{
    unsigned int a, b;
    int c;
    scanf("%d %d", &a, &b);
    c = (int)a;
    printf("%d\n", a && b);
    printf("%d\n", a & b);
    if (b >= 0 && b <= 31)
    {
        c >>= b;
        printf("%d\n", c);
        a >>= b;
        printf("%d\n", a);
    }
    return 0;
}