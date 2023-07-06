#include<stdio.h>
main()
{
	int i=1,n,sum=0;
	printf("enter n value\n");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+i;
		i=i+1;
	}
	printf("sum=%d\n",sum);
	return 0;
}
