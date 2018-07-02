#include<stdio.h>
int main()
{
	int N,A,D,tn,i,sum=0;
	scanf("%d %d %d",&N,&A,&D);
	tn=A+(N-1)*D;
	sum=(N * (2 * A + (N - 1)* D ))/ 2;
	printf("%d",sum);

	return 0;
}
