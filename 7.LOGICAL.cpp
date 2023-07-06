#include<stdio.h>
int main()
{
	int a=32,result=0;
	printf("initial value of a=%d\n",a);
	result=(a==31) && (a++);
	printf("final value of a=%d\n",a);
	printf("result of logical expression=%d\n",result);
	return 0;
}
