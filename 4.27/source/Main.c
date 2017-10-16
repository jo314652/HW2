#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, c;
	for (a = 1; a <= 500; a++){
		for (b = 1; b < a; b++){
			for (c = b; c < a; c++)
			{
				if (a*a == b*b + c*c)
				{
					printf("%3d %3d %3d\n", b, c ,a);
				}
			}
		}
	}
	
	system("pause");

}