#include <main.h>
/**
 * print_numbers - prints alphabet
 * Return: returns zero
 */

void print_numbers()
{
	int i;

	i = 0;
	while (i < 10)
	{
		_putchar (i + '0');
		i++;
	}
	_putchar ('\n');
}
