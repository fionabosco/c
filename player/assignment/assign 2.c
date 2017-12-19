
int main(void) 
{
int a,b,choice;
printf("enter a no\n");
scanf("%d",&a);
printf("1.+\n2.-\n3.*\n4./\n5.%\n");
printf("enter your choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
b=a+a;
printf("%d\n",b);
break;
case 2:
b=a-a;
printf("%d\n",b);
break;
case 3:
b=a*a;
printf("%d\n",b);
break;
case 4:
b=a/a;
printf("%d\n",b);
break;
case 5:
b=a%a;
printf("%d\n",b);
break;
}
	return 0;
}
