#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

typedef struct
{
  long long x;
  long long y;
} DI;

long long ab(long long x)
{
  long long d;
  if (x >= 0)
    d = x;
  else
    d = -x;
  return d;
}
long long d(DI p1, DI p2)
{
  long long D;
  D = ab(p1.x) - ab(p2.x) + ab(p1.y) - ab(p2.y);
  return D;
}


int cmp(const void *a, const void *b)
{
  DI *A = (DI *)a;
  DI *B = (DI *)b;
  return ((d(*A, *B) < 0 || d(*A, *B) == 0 && (A->x) > (B->x) || d(*A, *B) == 0 && (A->x) == (B->x) && (A->y) > (B->y)) ? 1 : -1);
}


int main()
{
  DI *a = NULL;
  int i, k, l, n;
  scanf("%d\n", &n);
  a = (DI *)calloc(n, sizeof(DI));
  for (i = 0; i < n; i++)
  {
    scanf("%lld %lld", &a[i].x, &a[i].y);
  }
  qsort(a, n, sizeof(DI), cmp);
  for (i = 0; i < n; i++)
  {
    printf("(%lld,%lld)", a[i].x, a[i].y);
  }
  return 0;
}
