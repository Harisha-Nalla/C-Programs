#include<stdio.h>
main()
{
	int a=10,b;
	b=a;
	printf("b=%d\n",b);
	b+=a;
	printf("b=%d\n",b);
	b-=a;
	printf("b=%d\n",b);
	b*=a;
	printf("b=%d\n",b);
	b/=a;
	printf("b=%d\n",b);
    b%=a;
    printf("b=%d\n",b);
    return 0;
}
