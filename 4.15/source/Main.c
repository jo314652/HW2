#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	double amount, principal = 5000, rate, year = 15;

	printf("%5s%21s\n", "Rate", "Amount on deposit");

	for (rate = 0.1; rate < 0.125; rate += 0.005)
	{
		amount = principal*pow(1.0+rate, year);
		printf("%4.3f%21.2f\n", rate, amount);
	}
	system("pause");

}