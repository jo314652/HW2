#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int length,breadth;

	printf("Enter the length and breadth:");
	scanf_s("%d%d", &length, &breadth);
	
	for (int x = 0; x < length; x++)
	{
		for (int y = 0; y < breadth; y++)
		{
			if (y == 0 || y == breadth - 1 || x == 0 || x == length - 1)printf("+");
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("\n");
	system("pause");

}