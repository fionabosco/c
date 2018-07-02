#include <stdio.h>

int main(void)
{
	int n,i,fact=1;
	scanf("%d",&n);
	if(n>0)
	{
		for(i=1;i<=n;i++)
		fact=fact*i;
		printf("%d",fact);
	}
	
	return 0;
}
