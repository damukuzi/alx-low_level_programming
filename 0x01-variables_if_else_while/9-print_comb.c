#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main - prints alphabet
 * Return: returns zero
 */
int main(void)
{
	long num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
		if (num <= 8)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
