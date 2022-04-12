/* more headers goes there */
#include "main.h"

/**
 * print_sign - prints alphabet
 * @n: Description of parameter x
 * Return: returns zero
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
