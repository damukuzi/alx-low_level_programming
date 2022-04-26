#include "main.h"
/**
 * _strpbrk - matches any character specified
 * @word: word to be scanned.
 * @substring: substring
 *Return: string word that matches any character specified in substring
 **/

char *_strpbrk(char *word, char *substring)
{
	int j;

	while (*word != '\0')
	{
		j = 0;
		while (substring[j] != '\0')
		{
			if (*word == substring[j])
			{
				return (word);
			}

			j++;
		}
		word++;
	}
	return (0);

}