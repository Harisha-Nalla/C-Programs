#include<stdio.h>
#include<conio.h>
struct student
{
	char name[30];
	int id;
	float marks;
};
main()
{
	struct student s1,s2,s3;
	printf("enter the id,name,marks of s1\n");
	scanf("%d%s%f",&s1.id,&s1.name,&s1.marks);
	printf("enter the id,name,marks of s2\n");
	scanf("%d%s%f",&s2.id,&s2.name,&s2.marks);
	printf("enter the id,name,marks of s3\n");
	scanf("%d%s%f",&s3.id,&s3.name,&s3.marks);
	printf("id,name,marks=%d%s%f\n",s1.id,s1.name,s1.marks);
	printf("id,name,marks=%d%s%f\n",s2.id,s2.name,s2.marks);
	printf("id,name,marks=%d%s%f\n",s3.id,s3.name,s3.marks);
}

