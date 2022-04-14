#include <main.h>

/**
 * print_most_numbers - prints alphabet
 * Return: returns zero
 */

void print_most_numbers(void)
{
	char ch;
	long num;

	for (num = 0; num <= 9; num++)
	{
		if ((num != 2) || (num != 4))
		{
			putchar(num + '0');
		}
	}
	putchar('\n');
	return (0);
}
