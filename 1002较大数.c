#include <stdio.h>
int main()
{
    int a, b, Max;
    printf("Enter a and b:\n");
    scanf("%d %d", &a, &b);
    Max = (a > b) ? a : b;
    printf("Max=%d\n", Max);
    return 0;
}