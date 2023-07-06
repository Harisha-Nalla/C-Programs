#include<stdio.h>
main()
{
	int a=15,b=10,c=5;
	printf("%d==%d is %d\n",a,b,a==b);
	printf("%d==%d is %d\n",b,c,b==c);
	printf("%d==%d is %d\n",c,a,c==b);
	printf("%d>%d is %d\n",a,b,a>b);
	printf("%d>%d is %d\n",b,c,b>c);
	printf("%d>%d is %d\n",c,a,c>b);
	printf("%d<%d is %d\n",a,b,a<b);
	printf("%d<%d is %d\n",b,c,b<c);
	printf("%d<%d is %d\n",c,a,c<b);
	printf("%d>=%d is %d\n",a,b,a>=b);
	printf("%d>=%d is %d\n",b,c,b>=c);
	printf("%d>=%d is %d\n",c,a,c>=b);
	printf("%d<=%d is %d\n",a,b,a<=b);
	printf("%d<=%d is %d\n",b,c,b<=c);
	printf("%d<=%d is %d\n",c,a,c<=b);
	printf("%d!=%d is %d\n",a,b,a!=b);
	printf("%d!=%d is %d\n",b,c,b!=c);
	printf("%d!=%d is %d\n",c,a,c!=b);
	return 0;
}
