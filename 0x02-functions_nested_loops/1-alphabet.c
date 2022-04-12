/* more headers goes there */
#include "main.h"

/**
 * print_alphabet - prints alphabet
 * Return: returns zero
*/
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
}
