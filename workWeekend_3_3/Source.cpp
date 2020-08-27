#include<stdio.h>
int main()
{
	int i, h, j, sp;
	printf("Enter Number : ");
	scanf("%d", &h);
	for (i = 1; i <= h - 1; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		for (sp = 1; sp <= 2 * (h - i); sp++)
		{
			printf(" ");
		}
		printf("\b");
		for (j = i; j >= 1; j--)
		{
			printf("*");
		}
		printf("\n");

	}
	for (i = h; i >= 1; i--)
	{
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		for (sp = 1; sp <= 2 * (h - i); sp++)
		{
			printf(" ");
		}
		printf("\b");
		for (j = i; j >= 1; j--)
		{
			printf("*");
		}
		printf("\n");

	}
}



	
