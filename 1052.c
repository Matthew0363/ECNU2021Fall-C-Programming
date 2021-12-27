//判断前n个字符，相同返回1，不同返回0

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cmp(char *s, char *t, int n);

int main(void)
{
	char *s = malloc(1000*sizeof(char)),*t = malloc(1000*sizeof(char));
	scanf("%s %s",s,t);
	
	int n;
	scanf("%d",&n);
	printf("%d",cmp(s,t,n));
	
	return 0;
}

int cmp(char *s, char *t, int n)
{
	int k=0;
	for(;k<n;k++)
	{
		if(s[k]!=t[k])
			return 0;
	}
	
	return 1;
	
}
