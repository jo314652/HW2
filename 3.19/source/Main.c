#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float principal, rate, days;

	while (1)
	{
		printf("Enter loan principal (-1 to end):");
		scanf_s("%f", &principal);
		if (principal == -1)break;
		else
		{
			printf("Enter interest rate:");
			scanf_s("%f", &rate);
			printf("Enter term of the loan in days:");
			scanf_s("%f", &days);
			printf("The interest charge is $%.2f\n", principal*rate*(days / 365));
		}
		printf("\n");
	}

	system("pause");

}