#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int stv;
	float manager_salary,hours,hourlysalary,sales,pics,price;

	while (1)
	{
		printf("�п�J�Q�p�⪺���u�~��N�X(1.�g�z�H��2.���~�u3.������u4.�s�u):");
		scanf_s("%d", &stv);

		switch (stv)
		{
		case 1:
			printf("�п�J�g�z�H���T�w���g�~:");
			scanf_s("%f", &manager_salary);
			printf("�g�z�H�����g�~:%.2f\n", manager_salary);
			printf("\n");
			break;

		case 2:
			printf("�п�J���~�u���u�@�ɼ�:");
			scanf_s("%f", &hours);
			printf("�п�J���~�u�����~:");
			scanf_s("%f", &hourlysalary);
			if (hours <= 40)
			{
				printf("���~�u���g�~:%.2f\n", hours*hourlysalary);
				printf("\n");
			}
			else
			{
				printf("���~�u���g�~:%.2f\n", 40 * hourlysalary + (hours - 40)*1.5*hourlysalary);
				printf("\n");
			}
			break;

		case 3:
			printf("�п�J������u��g���P����B:");
			scanf_s("%f", &sales);
			printf("������u���g�~:%.2f\n", 250 + 0.057*sales);
			printf("\n");
			break;

		case 4:
			printf("�п�J�s�u�C�g�Ͳ������:");
			scanf_s("%f", &pics);
			printf("�п�J�@�󪺳��S:");
			scanf_s("%f", &price);
			printf("�s�u���g�~:%.2f\n", pics*price);
			printf("\n");
			break;

		default:
			printf("�п�J���T���~��N�X\n");
			printf("\n");
			break;
		}

	}
	system("pause");

}