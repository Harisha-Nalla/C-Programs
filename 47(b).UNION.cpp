#include<stdio.h>
#include<conio.h>
union student
{
	char name[30];
	int id;
	float marks;
};
main()
{
	union student stu;
	int i;
	for(i=0;i<2;i++)
	{
	int a;
	float b;
	printf("enter the name of the student\n");
	scanf("%s",&stu.name);
	printf("enter the id of the student\n");
	scanf("%d",&a)	;
	printf("enter the marks of the student\n");
	scanf("%f",&b);
	printf("student name=%s",stu.name);
	printf("student id=%d",a);
	printf("student marks=%f",b);
	}
	return 0;
}

