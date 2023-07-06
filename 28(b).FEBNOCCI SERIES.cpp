#include<stdio.h>
main()
{
	int n;
	printf("enter n value\n");
	scanf("%d",&n);
	if(n<=0)
	printf("enter invalid input\n");
	else if(n<=1)
	printf("value:%d\n",0);
	else if(n<=2)
	printf("value:%d\n",1);
	else
	{
		int i,c,a=0,b=1;
		for(i=2;i<n;i++)
		{
			c=a+b;
			a=b;
			b=c;
		}
		printf("value:%d\n",c);
	}
}
