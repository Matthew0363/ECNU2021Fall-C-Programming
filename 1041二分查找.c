#include <stdio.h>

#define N 65536

int a[N], n, T, mid, L, R, start, end, i;

int main()
{
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &T);

    L = 0, R = n - 1, mid = (L + R) / 2;
    while (L <= R)
    {
        if (a[mid] > T)
            R = mid - 1;
        else if (a[mid] < T)
            L = mid + 1;
        else
            break;
        mid = (L + R) / 2;
    }

    if (L > R)
    {
        printf("FFFFFFFF\n");
        return 0;
    }

    start = end = mid;
    while (start - 1 >= 0 && a[start - 1] == T)
        start--;
    while (end + 1 < n && a[end + 1] == T)
        end++;

    printf("%X\n", (start << 16) + end);
    return 0;
}