//编写一个程序，将字符串s1中的a-z这样的简写符号扩展为等价的完整列表abc…在s2 xyz。
//允许字母的大小写和数字，并准备好处理像a-b-c, a-z0-9和a-z这样的情况。安排前面或后面的-按字面意思理解。
//您可以假设输入的字符串不超过10，只包含大小写字母、数字和-。
#include <stdio.h>

void getlines(char a[])
{
    int c, i;
    for (i = 0; i <= 9 && (c = getchar()) != EOF; i++)
        a[i] = c;

    a[i] = '\0';
}

void expand(char s1[], char s2[])
{
    int i = 0, j = 0;
    char temp;
    char c_left, c_right; //短横线左端字母，短横线右端字母
    while (s1[i])         // s1[i]='\0'时跳出循环
    {
        switch (s1[i])
        {
        case '-':
            if (i == 0 || s1[i + 1] == '\0')
                s2[j++] = '-';
            else
            {
                if (s1[i + 1] == '-')
                    s2[j + 2] = '-';

                c_left = s1[i - 1];
                c_right = s1[i + 1];

                if (c_left == c_right)
                    break;

                //把'-'替换为省略的字母
                for (temp = c_left; temp < c_right - 1; j++)
                {
                    temp++;
                    s2[j] = temp;
                }
            }
            break;
        default:
            s2[j++] = s1[i];
            break;
        }
        i++;
    }
    s2[j] = '\0';
}

int main()
{
    int i;
    char s1[100];
    char s2[100];
    getlines(s1);
    expand(s1, s2);
    for (i = 0; s2[i]; i++)
        printf("%c", s2[i]);
    return 0;
}