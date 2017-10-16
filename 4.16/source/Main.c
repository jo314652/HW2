#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("(A)\n");
	for (int x = 0; x < 10; x++)
	{
		for (int y = 0; y < x+1; y++)
		{
				printf("*");
		}
		printf("\n");
	}
	printf("\n");
	printf("(B)\n");
	for (int x = 0; x < 10; x++)
	{
		for (int y = 10; y > x; y--)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	printf("(C)\n");
	for (int x = 0; x < 10; x++)
	{
		for (int y = 0; y <11; y++)
		{
			if (y > x)printf("*");
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("\n");
	printf("(D)\n");
	for (int x = 0; x < 10; x++)
	{
		for (int y = 0; y < 11; y++)
		{
			if (y < 10 - x)printf(" ");
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}
	printf("\n");
	system("pause");

}