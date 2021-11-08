#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TRUE 1
#define FALSE 0
int isPrime(int n)
{
    int i;
    if (n <= 1)
        return FALSE;
    if (n == 2)
        return TRUE;
    if (n % 2 == 0)
        return FALSE;
    for (i = 3; i <= sqrt(n) + 1; i += 2)
    {
        if (n % i == 0)
            return FALSE;
    }
    return TRUE;
}
int main()
{
    int a;
    scanf("%d", &a);
    if (isPrime(a) == 1)
        printf("Is a prime number\n");
    if (isPrime(a) == 0)
        printf("Is NOT a prime number\n");
}