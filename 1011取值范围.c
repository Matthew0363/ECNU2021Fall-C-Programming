#include <stdio.h>
#include <limits.h>
int main()
{
    printf("%d %d\n", CHAR_MIN, CHAR_MAX);
    printf("%d %d\n", INT_MIN, INT_MAX);
    printf("0 %ld\n", UINT_MAX);
    printf("%d %d\n", SHRT_MIN, SHRT_MAX);
    printf("%lld %lld\n", LLONG_MIN, LLONG_MAX);
    printf("0 %llu\n", ULLONG_MAX);

    return 0;
}