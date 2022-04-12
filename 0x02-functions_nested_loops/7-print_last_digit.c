/* more headers goes there */
#include "main.h"

/**
 * print_last_digit - prints alphabet
 * @n: Description of parameter x
 * Return: returns zero
*/
int print_last_digit (int n)
{
	int last_number;

	if (n < 0)
	{
		last_number = (-1 * (n % 10));
		_putchar (last_number + '0');
		return (last_number);
	}
	else
	{
		last_number = (n % 10);
		_putchar (last_number + '0');
		return (last_number);
	}
}

