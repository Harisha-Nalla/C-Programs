#include<stdio.h>
#define swap(x,y)
main()
{
	int x,y,temp;
	printf("enter x,y values\n");
	scanf("%d%d",&x,&y);
	printf("before swap x=%d,y=%d\n",x,y);
	temp=x;
	x=y;
	y=temp;
	printf("after swapx=%d,y=%d\n",x,y);
}
