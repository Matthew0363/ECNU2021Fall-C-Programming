#include <stdio.h>
#include <math.h>
int main()
{
    int n, i, count = 0;
    scanf("%d", &n);
    if (n <= 1)
        printf("Is NOT a prime number");
    if (n == 2 || n == 3)
        printf("Is a prime number");
    else if (n >= 4)
    {
        for (i = 2; i <= sqrt(n) + 1; i++)
        {
            if (n % i == 0)
            {
                printf("Is NOT a prime number");
                count++;
            }
        }
        if (count == 0)
            printf("Is a prime number");
    }
}