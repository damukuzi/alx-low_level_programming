/* more headers goes there */
#include "main.h"

/**
 * _islower - prints alphabet
 * @c: Description of parameter x
 * Return: returns zero
*/
int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
