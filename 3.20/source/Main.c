#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float hours,rate;

	while (1)
	{
		printf("Enter # of hours worked (-1 to end):");
		scanf_s("%f", &hours);
		if (hours == -1)break;
		else
		{
			printf("Enter hourly rate of the worker ($00.00):");
			scanf_s("%f", &rate);
			if (hours<=40)
			printf("Salary is $%.2f\n", hours*rate);
			else
			{
				printf("Salary is $%.2f\n", 40*rate+(hours-40)*1.5*rate);
			}
		}
		printf("\n");
	}

	system("pause");

}