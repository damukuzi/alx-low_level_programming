/* more headers goes there */
#include "main.h"

/**
 * _abs - prints alphabet
 * @n: Description of parameter x
 * Return: returns zero
*/
int _abs(int n)
{
	if (n < 0)
	{
		return (n * (-1));
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (n);
	}
}

