#include "main.h"

/**
 * _strspn - Locates a character in a string
 * @word: word
 * @substring: substring
 * Return: return count
 **/

unsigned int _strspn(char *word, char *substring)

{
	int i, j;
	int count = 0;
	char *str1, *str2;

	str1 = word;
	str2 = substring;

	i = 0;
	while (str1[i] != '\0')
	{
		j = 0;
		while (str2[j] != '\0') 
		{
			if (str2[j] == str1[i])
			{
				count++;
				break;
			}
			j++;
		}
		if (word[i] != substring[j])
		{
			break;
		}
		i++;
	}
	return (count);
}
