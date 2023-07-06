#include<stdio.h>
main()
{
	int x[20],i,j,n,t;
	printf("enter n value below 20\n");
	scanf("%d",&n);
	printf("enter x elements\n");
	for(i=0;i<n;i++)
	scanf("%d",&x[i]);
	for(i=0;i<n;i++)
	for(j=i+1;j<n;j++)
	if(x[i]>x[j])
	{
		t=x[i];
		x[i]=x[j];
		x[j]=t;
	}
	printf("print in ascending order\n");
	for(i=0;i<n;i++)
	printf("%d\n",x[i]);
}
