#include<stdio.h>
#include<math.h>
main()
{
	float V,u,a,s;
	printf("enter values of u,a,s\n");
	scanf("%f%f%f",&u,&a,&s);
	V-=sqrt(u*u+2*a*s);
	printf("V=%f\n",V);
	return 0;
}
