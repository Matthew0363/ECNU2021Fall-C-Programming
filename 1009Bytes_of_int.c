#include <stdio.h>
int main()
{
    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof(unsigned));
    printf("%d\n", sizeof(char));
    printf("%d\n", sizeof(short));
    printf("%d\n", sizeof(long));
    printf("%d\n", sizeof(long long));
    printf("%d\n", sizeof(100));
    printf("%d\n", sizeof(-100));
    printf("%d\n", sizeof(12345u));
    printf("%d\n", sizeof(12345L));
    printf("%d\n", sizeof(12345LL));
    printf("%d\n", sizeof(1234567890));
    printf("%d\n", sizeof(12345678900));
    printf("%d\n", sizeof(0x12345670));
    printf("%d\n", sizeof(0x1234567890));
    return 0;
}
