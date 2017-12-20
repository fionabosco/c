#include <stdio.h>
int main(void)
{
int i,n;
int sum=0;
printf("enter the value of N");
scanf("%d",&n);
for(i=1;i<=n;i++)
sum=sum+i;
printf("%d",sum);
return 0;
}
