#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main - checks if an integer is positive or negative
 * Return: returns zero
 */
int main(void)
{
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDig = n % 10;
	/* your code goes there */
	if (lastdigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDig);
	}
	else
	{
		if (lastDigit <= 5 && lastDigit != 0)
		{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDig);
		}
		else
		{
			printf("Last digit of %d is %d and is less 0\n", n, lastDig);
		}
	}
	return (0);
}
