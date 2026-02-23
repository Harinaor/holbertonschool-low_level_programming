#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
 	prinf("Last digit of %d is %d", n, n % 10);
	{
		if (n % 10 > 5){
			printf("the string and is greater than 5");
		}
		else if (n % 10 == 0){
			printf("the string and is 0");
		}
		else (n % 10 > 0 && n % 10 < 6){
	       		printf("the string and is less than 6
			and not 0");
		}
	}

	return (0);
}
