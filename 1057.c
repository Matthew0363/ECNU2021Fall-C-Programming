#include <stdio.h>
#include <stdlib.h>
#define N 100000

typedef struct {
    long long num;
    char name[15];
    int score[3];
} STUDENT;
  double ave(STUDENT p1){ double av;
  av=((double)p1.score[0]+(double)p1.score[1]+(double)p1.score[2])/3;
  return av;
 }
 
 
 int cmp(const void *a,const void *b)
{
  STUDENT *aa = (STUDENT *)a;
     STUDENT *bb = (STUDENT *)b;
     return ((ave(*aa) < ave(*bb)||ave(*aa) == ave(*bb)&&(aa->num)>(bb->num)) ? 1 : -1);
}


STUDENT* Input(int n)
{ int i;
  STUDENT *p;
  p=(STUDENT*)calloc(n,sizeof(STUDENT));
      for(i=0;i<n;i++){
       scanf("%lld %s %d %d %d\n",&p[i].num,p[i].name,&p[i].score[0],&p[i].score[1],&p[i].score[2]);
   } 
   return p;
}


void Sort(STUDENT *ps, int n)
{ STUDENT *p1=ps;
   STUDENT d;
   int i,j,k;
   qsort(p1,n,sizeof(STUDENT),cmp);
}


int main() 
{
    STUDENT* a = NULL;
    int i, n;
    scanf("%d\n", &n);
    a = Input(n);
    Sort(a, n);
    for (i = 0; i < n; i++)
        printf("%lld %s %d %d %d\n", a[i].num, a[i].name,
               a[i].score[0], a[i].score[1], a[i].score[2]);
    return 0;
} 
