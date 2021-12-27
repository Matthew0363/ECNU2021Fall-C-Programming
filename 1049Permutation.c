#include <stdio.h>
#include <string.h>

void printd(char d, char s[])
{
    int i;
    char c;
    switch (d)
    {
    case '1':
    case '0':
        s[0] = d;
        s[1] = 0;
        break;
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
        for (i = 0, c = (d - '0' - 2) * 3; c <= (d - '0' - 2) * 3 + 2; c++, i++)
            s[i] = 'A' + c;
        s[i] = 0;
        break;
    case '7':
        strcpy(s, "PRS");
        break;
    case '8':
    case '9':
        for (i = 0, c = (d - '0' - 8) * 3; c <= (d - '0' - 8) * 3 + 2; c++, i++)
            s[i] = 'T' + c;
        s[i] = 0;
        break;
    }
}

int main()
{
    char s[4], s0[4], s1[4], s2[4];
    scanf("%s", s);

    printd(s[0], s0);
    printd(s[1], s1);
    printd(s[2], s2);

    int i, j, k;
    for (i = 0; s0[i]; i++)
        for (j = 0; s1[j]; j++)
            for (k = 0; s2[k]; k++)
                printf("%c%c%c\n", s0[i], s1[j], s2[k]);

    return 0;
}
