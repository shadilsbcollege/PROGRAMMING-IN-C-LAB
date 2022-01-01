#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	printf("enter a number\n");
	scanf("%d",&n);
	for(i=1;i<=5;i++)
	{
	for(j=5;j>=i;j++)
	{
	printf("*\t");
	}
	print("\n");
	}
	getch();
	}