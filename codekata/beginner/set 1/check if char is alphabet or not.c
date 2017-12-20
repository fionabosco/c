#include <stdio.h>
int main(void)
{
	char x;
	printf("enter a character");
	scanf("%c",&x);
	if((x>=65&&x<=96)||(x>=97&&x<=122))
	printf("alphabet");
	else
	printf("not");
	return 0;
}
