#include<stdio.h>
main()
{
	int i,j,num;
	printf("enter the number of lines\n");
	scanf("%d",&num);
	int stars=1,space=num;
	while(stars<=num)
	{
	for(i=0;i<space;i++)
	printf(" ");
	for(j=0;j<stars;j++)
	printf("*");
	printf("\n");
	stars=stars+2;
	space--;	
	}
	stars=stars+1;
	while(stars>=1)
	{
	for(i=0;i<space;i++)
	printf(" ");
	for(j=1;j<stars;j++)
	printf("*");
	printf("\n");
	stars=stars-2;
	space++;
	}
}
