#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter values of a,b,c\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
	 if(a>c)
	  printf("a is largest\n");
	else
	  printf("c is largest\n");	
	}
	else
	{
		if(c>b)
			printf("c is largest\n");
			else
			printf("b is largest\n");
	}
}
