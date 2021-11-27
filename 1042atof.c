#include <stdio.h>
#include <math.h>
#include <ctype.h>

double atof(char s[])
{
    double val, power;
    int i, sign;
    double exp = 1;
    int exp_sign;

    for (i = 0; isspace(s[i]); i++)
        ;
    sign = (s[i] == '-') ? -1 : 1;
    if (s[i] == '-' || s[i] == '+')
        i++;
    for (val = 0; isdigit(s[i]); i++)
        val = val * 10 + s[i] - '0';
    if (s[i] == '.')
        i++;
    for (power = 1; isdigit(s[i]); i++)
        val = val * 10 + s[i] - '0', power *= 10;
    if (s[i] == 'e' || s[i] == 'E')
    {
        i++;
        exp_sign = (s[i] == '-') ? -1 : 1;
        if (s[i] == '-' || s[i] == '+')
            i++;
        for (exp = 0; isdigit(s[i]); i++)
            exp = exp * 10 + s[i] - '0';
        exp = pow(10, exp_sign * exp);
    }
    return sign * val / power * exp;
}

#define MAXLINE 80

int main()
{
    char s[MAXLINE];
    scanf("%s", s);
    printf("%f\n", atof(s));
}