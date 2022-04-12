/* more headers goes there */
#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet
 * Return: returns zero
*/
void print_alphabet_x10(void)
{
	int i = 0;

	while (i <= 10)
	{
		char ch = 'a';

		while (ch <= 'z')
		{
			putchar(ch);
			ch++;
		}
		i++;
		putchar('\n');
	}
}
