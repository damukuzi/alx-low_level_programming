#include <main.h>
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
	}

	putchar('\n');
	return (0);
}
