#include<stdio.h>
main()
{
	int a=0,b=1,c,n,i;
	printf("enter n value\n");
	scanf("%d",&n);
	printf("%d\n%d\n",a,b);
	for(i=3;i<=n;i++)
	{
		if(i<=1)
		c=i;
		else
		{
		 c=a+b;
		 a=b;
		 b=c;
		}
	 printf("%d\n",c);	
	}
}
