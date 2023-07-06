#include<stdio.h>
main()
{
	int a,b,big;
	printf("enter values of a,b\n");
	scanf("%d%d",&a,&b);
	big=(a>b)?a:b;
	printf("big value is=%d\n",big);
	return 0;
}
