#include <stdio.h>
/**
 * print_diagsums - the sum of diagonals
 * @matrix: 2d array of chars
 *@n: number matrix
*Return: void
 */

void print_diagsums(int *matrix, int n)
{
	int i;
	int sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	i = 0;
	while (i < n)
	{
		sum1 = sum1 + *(matrix + i * n + i);
		sum2 = sum2 + *(matrix + i * n + n - i - 1);
		i++;
	}

	printf("%i, %i\n", sum1, sum2);

}
