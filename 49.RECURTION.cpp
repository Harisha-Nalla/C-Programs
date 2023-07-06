#include<stdio.h>
#include<conio.h>
struct student
{
	int id;
	char name [30];
	float per;
};
main()
{
	struct student s1={10,"tree",78};
	struct student s2;
	printf("enter the details of s1\n");
	scanf("%d%s%f",&s1.id,&s1.name,&s1.per);   
	printf("enter the details of s2\n");
	scanf("%d%s%f",&s2.id,&s2.name,&s2.per); 
	printf("student id=%d student name=%s student precentage=%f\n",s1.id,s1.name,s1.per);
	printf("student id=%d student name=%s student precentage=%f\n",s2.id,s2.name,s2.per);
	}

