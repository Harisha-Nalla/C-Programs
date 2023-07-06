#include<stdio.h>
main()
{
	int x[10],i,n,sum=0;
	printf("enter n value below 10\n");
	scanf("%d",&n);
	printf("enter x elements\n");
	for(i=0;i<n;i++)
	{
	 scanf("%d",&x[i]);
	 sum=sum+x[i];
	}
	printf("%d\n",sum);
}
