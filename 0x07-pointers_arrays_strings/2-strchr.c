#include "main.h"

/**
 * _strchr - gets a character in a string
 * @word: word
 * @letter: letter to search
 * Return: returns word
 **/

char *_strchr(char *word, char letter)
{

	while (*word != '\0')
	{
		if (*word == letter)
		{
			return (word);
		}
		++word;
	}

	if (*word == letter)
	{
		return (word);
	}
	return (0);
}
