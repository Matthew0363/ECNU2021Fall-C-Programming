#include <stdio.h>
int main()
{
    int a, b, ave;
    scanf("%d %d", &a, &b);
    ave = 0.5 * a + 0.5 * b;
    if (ave > 0)
        ave = (int)(ave + 0.5);
    else
        ave = (int)(ave - 0.5);
    printf("%d\n", ave);
}