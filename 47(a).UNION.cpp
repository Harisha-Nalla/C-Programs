#include<stdio.h>
#include<conio.h>
union student
{
  int sno;
  char name[30];
  float marks;
};
main()
{
  union student s[30];
  int i;
  for(i=0;i<2;i++)
{
  	printf("\nenter sno of students\n");
  	scanf("%d",&s[i].sno);
  	printf("\nenter name of students\n");
  	scanf("%s",&s[i].name);
  	printf("\nenter marks of students\n");
  	scanf("%f",&s[i].marks);
  	printf("sno=%d\n",s[i].sno);
  	printf("name=%s\n",s[i].name);
  	printf("marks=%f\n",s[i].marks);
}
}

