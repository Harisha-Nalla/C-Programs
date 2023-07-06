#include<stdio.h>
#include<conio.h>
struct student
{
  int rollno;
  char name[20];
  float per;
};
main()
{
  struct student s[20];
  int i;
  for(i=0;i<1;i++)
  {
  	printf("enter the rollno\n");
  	scanf("%d",&s[i].rollno);
  	printf("enter the name\n");
  	scanf("%s",&s[i].name);
  	printf("enter the per\n");
  	scanf("%f",&s[i].per);
  	printf("rollno=%d\n",s[i].rollno);
  	printf("name=%s\n",s[i].name);
  	printf("per=%f\n",s[i].per);
  }
}
