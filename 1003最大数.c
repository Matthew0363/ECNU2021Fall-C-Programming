#include <stdio.h>
int main()
{
    int a, b, c, Max;
    printf("Enter a,b and c:");
    scanf("%d %d %d", &a, &b, &c);
    Max = ((a > b) ? a : b) > c ? ((a > b) ? a : b) : c;
    printf("Max=%d\n", Max);
    return 0;
}