#include<stdio.h>
#include<conio.h>
struct student
{
	int sno;
	float per;
};
int main()
{
	struct student si;
	printf("enter s.no\n");
	scanf("%d",&si.sno);
	printf("enter per\n");
	scanf("%f",&si.per);
	int display(si.sno);
	printf("sno=%d",si.sno);
	printf("percentage=%f",si.per);
}



