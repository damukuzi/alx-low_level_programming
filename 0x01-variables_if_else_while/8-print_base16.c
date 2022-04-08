#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main - Short description, single line
 * Return: Description of the returned value
 */
int main(void)
{
	char ch;
	long num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
	}

	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
