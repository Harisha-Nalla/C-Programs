#include<stdio.h>
main()
{
	int n,i,sum=0;
	printf("enter n value\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		sum++;
	}
	if(sum==2)
	printf("%d is a prime number\n",n);
	else
	printf("%d is not a prime number\n",n);
	return 0;
}
