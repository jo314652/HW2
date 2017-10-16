#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int stv;
	float manager_salary,hours,hourlysalary,sales,pics,price;

	while (1)
	{
		printf("請輸入想計算的員工薪資代碼(1.經理人員2.時薪工3.抽佣金工4.零工):");
		scanf_s("%d", &stv);

		switch (stv)
		{
		case 1:
			printf("請輸入經理人員固定的週薪:");
			scanf_s("%f", &manager_salary);
			printf("經理人員的週薪:%.2f\n", manager_salary);
			printf("\n");
			break;

		case 2:
			printf("請輸入時薪工的工作時數:");
			scanf_s("%f", &hours);
			printf("請輸入時薪工的時薪:");
			scanf_s("%f", &hourlysalary);
			if (hours <= 40)
			{
				printf("時薪工的週薪:%.2f\n", hours*hourlysalary);
				printf("\n");
			}
			else
			{
				printf("時薪工的週薪:%.2f\n", 40 * hourlysalary + (hours - 40)*1.5*hourlysalary);
				printf("\n");
			}
			break;

		case 3:
			printf("請輸入抽佣金工當週的銷售金額:");
			scanf_s("%f", &sales);
			printf("抽佣金工的週薪:%.2f\n", 250 + 0.057*sales);
			printf("\n");
			break;

		case 4:
			printf("請輸入零工每週生產的件數:");
			scanf_s("%f", &pics);
			printf("請輸入一件的報酬:");
			scanf_s("%f", &price);
			printf("零工的週薪:%.2f\n", pics*price);
			printf("\n");
			break;

		default:
			printf("請輸入正確的薪資代碼\n");
			printf("\n");
			break;
		}

	}
	system("pause");

}