#include <stdio.h>
#include <ctype.h>
int main()
{
    char c1, c2;
    scanf("%c", &c1);
    c2 = tolower(c1);
    printf("%d %d", c1, c2 - 96);
    return 0;
}