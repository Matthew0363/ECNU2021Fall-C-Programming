#include <stdio.h>

void LongestWord(const char str[], char result[])
{
    const char *start = str;
    int max_len = 0;
    int i;

    const char *p = str, *q;
    while (*p)
    {
        while (*p == ' ')
            p++;
        for (q = p; *q && *q != ' '; q++)
            ;
        if (q - p > max_len)
        {
            max_len = q - p;
            start = p;
        }
        p = q;
    }
    for (i = 0; i < max_len; i++)
        result[i] = *start++;
    result[i] = 0;
}

#define N 80

int main()
{
    char s[N + 1], r[N + 1];
    gets(s);
    LongestWord(s, r);
    printf("%s\n", r);
    return 0;
}