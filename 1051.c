#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int strend(const char * s,const char * t);

int main()
{
	const char *s = malloc(20*sizeof(char)), *t = malloc(20*sizeof(char));
	scanf("%s %s",s,t);
	printf("%d",strend(s,t));
	
	return 0;
	
}

int strend(const char * s,const char * t)
{
	int ls = strlen(s);
	int lt = strlen(t);
	int i = ls - lt;
	int j = 0;
	
	if(ls<lt) return 0;
	else
	{
		for(;i<ls,j<lt;i++,j++)
		{
			if(s[i]!=t[j])
				return 0;
		}
		
		return 1;
	}
}
