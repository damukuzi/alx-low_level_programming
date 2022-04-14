#include <main.h>
/**
 * print_numbers - prints alphabet
 * Return: returns zero
 */

void print_numbers(void)
{
	long num;

	for (num = 0; num <= 9; num++)
	{
		_putchar(num + '0');
	}

	_putchar('\n');
	return (0);
}
