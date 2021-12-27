#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define N 10

/*
int main()
{   int n,i,j; 
	scanf("%d",&n);
	
	int a[N][N];
    for (i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		scanf("%d",&a[i][j]);
		}
	}
	
    int temp;
	for(i=1;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			temp=a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=temp;
		}
	}
    
    for (i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		printf("%d ",a[i][j]);
		}
		printf("\n");
	}
    return 0;
}

*/


int main()
{   int *a,n,i; scanf("%d",&n);
    a=(int*)malloc(n*n*sizeof(int));
    for (i=0;i<n*n;i++) scanf("%d",a+i);
    Transpose(a,n);
    for (i=0;i<n*n;i++)
    { printf("%d ",a[i]); if ((i+1)%n==0) printf("\n"); }
    free(a);
    return 0;
}

void Transpose(void *a, int n)
{
	int *m = (int *)a;
	int temp;
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			temp = m[n*i+j];
			m[n*i+j] = m[n*j+i];
			m[n*j+i] = temp;
		}
	}
}
