#include "main.h"
/**
 *_strcmp - compares two strings
 *@s1: A pointer to a character that will be changed
 *@s2: A pointer to a character that will also be changed/modified/updated
 *Return: dest
 */

int _strcmp(char *s1, char *s2)
{

	char *first_string = s1;
	char *second_string = s2;

	while (*first_string != '\0' && *second_string != '\0' && *first_string == *second_string)
	{
		first_string++;
		second_string++;
	}

	return (*first_string - *second_string);
}
