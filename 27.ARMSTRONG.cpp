#include<stdio.h>
main()
{
	int n,r,sum=0,t;
	printf("enter n value\n");
	scanf("%d",&n);
	t=n;
	while(n!=0)
	{
		r=n%10;
		sum=sum+r*r*r;
		n=n/10;
	}
	if(sum==t)
	{
		printf("armstrong");
	}
	else
	{
		printf("not a armstrong");
	}
}
