#include<stdio.h>
main()
{
	int n;
	printf("enter n value\n");
	scanf("%d",&n);
	if(n%4==0)
	{
		printf("n is a leap year");
	}
	else
	{
		printf("n is not a leap year");
	}
}
