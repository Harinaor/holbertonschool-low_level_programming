#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - calcul last digit of ramdom number and print whether
 * number is greater than 5 or is 0 or is less than 6 and  not 0
 * return - print the last digit of the ramdom number 
 */
int main(void)
{
	int n;

	srand(time(0));
	n = 980;
		printf("Last digit of %d is %d", n, n % 10);
	{
		if (n % 10 > 5)
		{
			printf("and is greater than 5");
		}
		else if (n % 10 == 0)
		{
			printf("and is 0");
		}
		else
			printf("and is less than 6 and not 0");
	}
	return (0);
}
