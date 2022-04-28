#include "main.h"
/**
 *_print_rev_recursion - prints a string
 *@word: sentence to print
 *Return: void
 */

void _print_rev_recursion(char *word)
{
	if (*word)
	{
		reverse(word + 1);
		_putchar(*word);
	}
}
