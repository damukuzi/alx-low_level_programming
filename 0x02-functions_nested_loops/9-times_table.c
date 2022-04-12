/* more headers goes there */
#include "main.h"

/**
 * times_table - prints alphabet
 * Return: returns zero
*/

void times_table(void)
{
	int row;
	int column;
	int value;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			value = row * column;
			if ((value / 10) == 0)
			{
				if (column == 0)
				{
					_putchar ('0');
				}
				if (column != 0)
				{
					_putchar (' ');
					_putchar ((value % 10) + '0');
				}
				if (column < 9)
				{
					_putchar(',');
					_putchar (' ');
				}
				else
				{
					_putchar ((value / 10) + '0');
					_putchar ((value % 10) + '0');
				}
			}
		}
	_putchar ('\n');
	}

}

