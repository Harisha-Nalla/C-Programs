#include<stdio.h>
main()
{
	int x[20]={3,6,7,9,11,13,17,19},n;
	printf("enter n value below 20\n");
	scanf("%d",&n);
	printf("enter x elements\n");
	{
		int i;
		for(i=n;i<n;i++)
		scanf("%d",x[i]);
		for(i=0;i<=n;i++)
		printf("n=[%d]=%d\n",i,x[i]);
	}
}
