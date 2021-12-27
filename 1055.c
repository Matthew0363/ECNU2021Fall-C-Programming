#include <stdio.h>

int main(void)
{
	char *month[] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
	int n;
	scanf("%d",&n);
	printf("%s",month[n-1]);
	
	return 0;
}
