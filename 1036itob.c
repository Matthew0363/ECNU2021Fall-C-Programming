//编写一个函数itob(n,s,b)，它将整数n转换为字符串s中以b为基数的字符表示。特别地，itob(n,s,16)将s格式为s的十六进制整数。
#include <stdio.h>

//按位次展开字符串的顺序相反，故最后还需要逆序输出字符串s，添加一个函数完成该项操作

void backString(char s[])
{
    int i, l = strlen(s), temp;
    for (i = 0; i <= l / 2 - 1; i++)
    {
        temp = s[i];
        s[i] = s[l - i - 1];
        s[l - i - 1] = temp;
    }
}

void itob(int n, char s[100], int b)
{
    int flag = 0, i = 0;
    if (n < 0)
        flag = 1, n = -n;//负数的情形用flag标记
    while (n > 0)
    {
        if (n % b < 10)
            s[i++] = '0' + n % b;//当结果在10以内时用数字输出
        else
            s[i++] = 'A' + n % b - 10;
        n = n / b;
    }
    s[i] = '\0';//即逆序输出后的末尾添加\0
    if (flag == 1)
    {
        s[i] = '-';
        s[i + 1] = '\0';
    }
    backString(s);
}

int main()
{
    int n, b;
    char s[100];
    scanf("%d%d", &n, &b);
    itob(n, s, b);
    printf("%s\n", s);
    return 0;
}