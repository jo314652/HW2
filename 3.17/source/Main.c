#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int account;
	float balance, charges, cridits, criditlimit,newbalance;

	while (1)
	{
		printf("Enter account number (-1 to end):");
		scanf_s("%d", &account);
		if (account == -1)break;
		else
		{
			printf("Enter beginning balance:");
			scanf_s("%f", &balance);
			printf("Enter total charges:");
			scanf_s("%f", &charges);
			printf("Enter total credits:");
			scanf_s("%f", &cridits);
			printf("Enter credit limit:");
			scanf_s("%f", &criditlimit);
			newbalance = balance + charges - cridits;
			if (newbalance > criditlimit)
			{
				printf("Account:     %d\n", account);
				printf("Credit limit:%.2f\n", criditlimit);
				printf("Balance:     %.2f\n", balance);
				printf("Credit Limit Exceeded.\n");
			}
		}
			printf("\n");
	}

	system("pause");

}