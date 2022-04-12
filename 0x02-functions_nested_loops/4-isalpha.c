/* more headers goes there */
#include "main.h"

/**
 * _isalpha - prints alphabet
 * Return: returns zero
*/
int _isalpha(int c)
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

