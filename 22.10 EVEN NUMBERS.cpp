#include<stdio.h>
main()
{
	int a=2,n;
	printf("enter n value\n");
	scanf("%d",&n);
	while(a<=n)
	{
		printf("%d\n",a);
		a=a+2;
	}
	return 0;
}
