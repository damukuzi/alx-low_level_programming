/* more headers goes there */
#include "main.h"

/**
 * _islower - prints alphabet
 * Return: returns zero
*/
int _islower(int c)
{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
