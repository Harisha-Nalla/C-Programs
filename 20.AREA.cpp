#include<stdio.h>
#include<math.h>
main()
{
	float A,s,a,b,c;
	printf("enter values of a,b,c\n");
	scanf("%f%f%f",&a,&b,&c);
	s=(a+b+c)/2;
	A=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("A=%f\n",A);
	return 0;
}
