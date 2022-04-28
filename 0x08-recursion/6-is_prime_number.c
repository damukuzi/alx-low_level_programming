#include "main.h"
/**
 *is_prime - recursion loop
 *@n: n
 *@i: number to iterate
 *Return: return 1 or 0
 */

int is_prime(int n, int i)
{
	if (i == 2)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}

	if (i * i > n)
	{
		return (1);
	}
	return (is_prime(n, i + 1));
}

/**
 *is_prime_number - evaluate prime or not
 *@n: number
 *Return: return 1 prime - return 0 otherwise
 */

int is_prime_number(int n)
{
	int i;

	i = 2;

	if (n < 2)
		return (0);
	else if (n == 2)
	{
		return (1);
	}
	else
	{
		return (is_prime(n, i));
	}
}
