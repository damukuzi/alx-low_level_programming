#include "main.h"
/**
 *_pow_recursion - returns the value of a raised to the power of b
 *@a: integer
 *@b: integer
 *Return: pow recursion
 */

int _pow_recursion(int a, int b)
{
	if (b == 0) /*Base condition*/
	{
		return (1);
	}
	else if (b > 0)
	{
		return (a * _pow_recursion(a, b - 1));
	}
	else
	{
		return (-1);
	}
}
