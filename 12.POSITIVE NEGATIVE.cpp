#include<stdio.h>
main()
{
	int a;
	printf("enter a value\n");
	scanf("%d",&a);
	if(a>0)
	{
		printf("a is positive number\n");
	}
	else
	if(a<0)
	{
		printf("a is negative number\n");
	}
	else
	{
		printf("a is zero\n");
	}
}
