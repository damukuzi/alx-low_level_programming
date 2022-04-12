/* more headers goes there */
#include "main.h"

/**
 * print_alphabet - prints alphabet
 * Return: returns zero
*/
void print_alphabet_x10(void)
{
	int i = 0;
	char ch;

	while (i <= 10)
	{
		for (ch = 'a' ; ch <= 'z'; ch++)
		{
			putchar(ch);
			ch++;
		}
		i++;
		putchar('\n');
	}
}
