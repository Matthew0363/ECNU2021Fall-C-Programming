#include <stdio.h>
#define N 8

unsigned h2i(char s[])
{
    unsigned i, num = 0;
    for (i = 0; s[i]; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'f')
            num = 16 * num + s[i] - 'a' + 10;
        else if (s[i] >= 'A' && s[i] <= 'F')
            num = 16 * num + s[i] - 'A' + 10;
        else if (s[i] >= '0' && s[i] <= '9')
            num = 16 * num + s[i] - '0';
    }
    return num;
}
int main()
{
    char s[N + 1];
    scanf("%s", s);
    printf("%u\n", h2i(s));
    return 0;
}