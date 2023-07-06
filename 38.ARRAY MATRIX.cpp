#include<stdio.h>
main()
{
	int x[2][2],i,j;
	printf("enter x elemnts\n");
	for(i=0;i<2;i++)
	{
	for(j=0;j<2;j++)
	{
	scanf("%d",&x[i][j]);
	}
	}
	printf("print like a matrix\n");
	for(i=0;i<2;i++)
	{
	for(j=0;j<2;j++)
	{
	printf("%d\t",x[i][j]);
	}
	printf("\n\n");
}
}
