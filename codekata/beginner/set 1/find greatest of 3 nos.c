#include<stdio.h>
int main(void)
{
int a,b,c;
printf("enter the 3 nos");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
printf("a is greater");
else if(b>a&&b>c)
printf("b is greater");
else
printf("c is greater");
return 0;
}
