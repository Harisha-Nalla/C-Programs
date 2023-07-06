#include<stdio.h>
#include<conio.h>
struct student
{
  int sno;
  char name[20];
  float marks;
};
main()
{
  struct student s[20];
  int i;
  for(i=0;i<3;i++)
  {
  	printf("enter the details of students sno\n");
  	scanf("%d",&s[i].sno);
  	printf("enter the details of students name\n");
  	scanf("%s",&s[i].name);
  	printf("enter the details of students marks\n");
  	scanf("%f",&s[i].marks);
  	printf("sno=%d\n",s[i].sno);
  	printf("name=%s\n",s[i].name);
  	printf("marks=%f\n",s[i].marks);
  }
}
