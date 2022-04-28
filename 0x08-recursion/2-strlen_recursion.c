#include "main.h"
/**
 *_strlen_recursion - length of a string
 *@word: character
 *Return: strlen_recursion
 */

int _strlen_recursion(char *word)
{
	if (*word == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(word + 1));
	}
}