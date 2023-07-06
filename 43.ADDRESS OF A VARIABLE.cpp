#include<stdio.h>
main()
{
	int x,y;
	printf("enter x value\n");
	scanf("%d",&x);
	printf("x=%d\n",x);
	y=4*x;
	printf("address of *=%d\n",y);
	printf("x=%d",y);
}
