#include <stdio.h>
int main()
{
    char c;
    scanf("%c", &c);
    int n = c;
    int remainder, i = 1, step = 1, count = 0, num;
    long long binaryNumber = 0;
    while (n != 0)
    {
        remainder = n % 2;
        n /= 2;
        binaryNumber += remainder * i;
        i *= 10;
    }
    printf("%lld", binaryNumber);
    return 0;
}
