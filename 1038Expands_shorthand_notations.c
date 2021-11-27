//编写一个程序，将字符串s1中的a-z这样的简写符号扩展为等价的完整列表abc…在s2 xyz。
//允许字母的大小写和数字，并准备好处理像a-b-c, a-z0-9和a-z这样的情况。安排前面或后面的-按字面意思理解。
//您可以假设输入的字符串不超过10，只包含大小写字母、数字和-。
#include <stdio.h>

char s[11];

int main()
{
    scanf("%s", s);
    for (int i = 0; s[i]; i++)
    {
        if (s[i] != '-')
            putchar(s[i]);
        else if (i - 1 >= 0 && s[i - 1] != '-' && s[i + 1] != '-' && s[i + 1])
        {
            for (char c = s[i - 1] + 1; c <= s[i + 1]; c++)
                putchar(c);
            i++;
        }
        else
            putchar(s[i]);
    }
    putchar('\n');
}