#include <stdio.h>
#include <math.h>
int main()
{
    long int n, n0, m, count, p, q;//long int避免值超出范围
    scanf("%ld %ld", &n, &m);
    n0 = n;
    if (n == 0)
        printf("1 0");//单独列出n=0的情况
    else
    {
        while (n != 0)
        {
            count++;
            n = n / 10;
        }
        printf("%d ", count); //输出n的位数
        if (m > count)
            m = m % count;//取余数，避免循环
        p = n0 / pow(10, m);//p取高位
        q = n0 - p * pow(10, m);//q取低位
        n0 = q * pow(10, count - m) + p;
        printf("%ld", n0);
    }
}