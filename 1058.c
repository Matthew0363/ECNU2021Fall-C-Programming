#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#define N 500001
 
int cmp(const void *a, const void *b)
{
    return strcmp(*(char**)a, *(char**)b);
}


int main()
{ 
    int i=0,d=0,r;
    char *s=(char*)malloc(sizeof(char)*(N+1));
    char *w[N]; 
    
    while(scanf("%s",s)!=EOF)
	{ 	
		w[i]=(char*)malloc(sizeof(char)*(strlen(s)+1));
        strcpy(w[i],s) ;i++;
  	}
    
	qsort(w,i,sizeof(w[0]),cmp);
    
	while(d<i)
    {
    	r=d;
        while(d<i&&strcmp(w[r],w[d])==0) d++;
        printf("%s %d\n",w[r],d-r);
    }
    
    
    return 0;
  } 
