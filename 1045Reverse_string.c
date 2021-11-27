#include <stdio.h>
#include <string.h>

#define MAXLINE 80

char s[MAXLINE];

void reverse(char s[], int l)
{
    if (l > 0)
    {
        printf("%c", s[l - 1]);
        reverse(s, l - 1);
    }
    else
        return;
}

int main()
{
    scanf("%s", s);
    reverse(s, strlen(s));
}