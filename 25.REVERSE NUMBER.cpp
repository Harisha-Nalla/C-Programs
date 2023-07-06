#include<stdio.h>
main()
{
	int n,r,rev;
	printf("enter n value\n");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	printf("reverse no=%d\n",rev);
}
