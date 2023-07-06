#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char name [30];
	int len;
	printf("enter a string\n");
	gets(name);
	len=strlen(name);
	printf("length=%d\n",len);	
}
