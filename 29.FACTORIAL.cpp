#include<stdio.h>
main()
{
	int n,i=1,f=1;
	printf("enter n value\n");
	scanf("%d",&n);
	while(i<=n)
	{
		f=f*i;
		i++;
	}
	printf("factorial is%d",f);
}
