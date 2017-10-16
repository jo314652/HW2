#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	for (int x = 1; x <= 5; x++)
	{
		for (int y = 5-x; y > 0 ; y--)
		{
			printf(" ");
		}
		for (int y = 1; y <= x * 2 - 1; y++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (int x = 1; x <= 4; x++)
	{
		for (int y = 5-x; y < 5; y++)
		{
			printf(" ");
		}
		for (int y = 7; y >= x * 2 - 1; y--)
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");

}