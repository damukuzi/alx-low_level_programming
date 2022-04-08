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
		if (num <= 8)
		{
			putchar(num + '0');
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar(num + '0');
		}
	}
	putchar('\n');
	return (0);
}
