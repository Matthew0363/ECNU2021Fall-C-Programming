#include <stdio.h>
#include <string.h>
int strReverseIndex(char s[], char t[])
{
    int ls = strlen(s), lt = strlen(t);
    if (lt > ls) //如果t的长度大于s，则输出-1
        return -1;
    int i, p;
    for (p = ls - lt; p >= 0; p--) //总共需要判断ls-lt+1次
    {
        for (i = 0; i < lt && s[p + i] == t[i]; i++) //判断每一位是否相同，共计lt次，只有当每一位都想同时才进行lt次
            ;
        if (i == lt)
            return p;
    }
    return -1;
}

#define N 80

int main()
{
    char s[N + 1], t[N + 1];
    scanf("%s%s", s, t);
    printf("%d\n", strReverseIndex(s, t));
    return 0;
}