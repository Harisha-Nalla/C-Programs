#include<stdio.h>
main()
{
	int n,r,rev=0,t;
	printf("enter n value\n");
	scanf("%d",&n);
	t=n;
	while(n!=0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	if(rev==t)
	{
		printf("%d is palindrome",t);
	}
	else
	{
		printf("%d is not a palindrome",t);
	}
}
