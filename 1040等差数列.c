#include <stdio.h>
#include <string.h>

int main()
{
    int s[100], count = 0, i = 0, j;
    while (scanf("%d", &s[i]) != EOF)
    {
        i++;
    }
    s[i] = '\0';
    j = i;
    for (i = 0; i <= j - 3 && s[i + 1] - s[i] == s[i + 2] - s[i + 1]; i++)
    {
        count++;
    }
    if (count == j - 2)
        printf("Yes");
    else
        printf("No");
    return 0;
}