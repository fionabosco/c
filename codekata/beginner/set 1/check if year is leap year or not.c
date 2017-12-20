#include <stdio.h>
int main(void)
{
int x;
printf("enter year u were born");
scanf("%d",&x);
if(x%4==0)
printf("leap year");
else if(x%4!=0)
printf("not a leap year");
return 0;
}
