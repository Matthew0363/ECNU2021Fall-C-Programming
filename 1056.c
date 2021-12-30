#include <stdio.h>

#define N 1000

int bit(unsigned int a);
void swap(unsigned int *a,unsigned int *b);

int main()
{ 
	unsigned int a[N],b[N];  
	int tmp,n,i;

	scanf("%d",&n);
	
  	for (i=0;i<n;i++) 
	  	scanf("%u",&a[i]);  

	for(i=0;i<n;i++)
		b[i] = bit(a[i]);
		

	int p,q;
			
	for(p=0;p<n-1;p++)
	{
		for(q=0;q<n-p-1;q++)
		{
			if(b[q]<b[q+1])
			{
				swap(&b[q],&b[q+1]);
				
				swap(&a[q],&a[q+1]);
			}
			else if(b[q]==b[q+1])
			{
				if(a[q]>a[q+1])
				{
					swap(&b[q],&b[q+1]);
				
					swap(&a[q],&a[q+1]);
				}
			}
		}
	}
		
	
	for (i=0;i<n;i++) 
	  	printf("%u%c",a[i],i!=n-1?' ':'\n');
	
	return 0;
}



int bit(unsigned int a)//统计a的二进制表示中1的个数 
{
	int num[32]={};
	int i=0,cnt=0;
	while(a>0)
	{
		num[i] = a%2;
		i++;
		a/=2;
	}
	
	for(;i>=0;i--)
	{
		if(num[i]==1)
			cnt++;
	}
	
	return cnt;
}

void swap(unsigned int *a,unsigned int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
