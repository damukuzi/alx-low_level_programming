#include "main.h"
/**
 * _strstr - first occurrence of the  substring in the string word
 * @word: main str to be examined
 * @substring: searched in word
 * Return: return 0
 **/

char  *_strstr(char *word, char *substring)
{
	char *str1, *str2; 

	while (*word != '\0')
	{
		str1 = word; 
		str2 = substring;

		while (*word != '\0' && *str2 != '\0' && *word == *str2)
		{
			word++;
			str2++;
		}
		if (*str2 == '\0')
			return (str1);
		word = str1 + 1;
	}
	return (0);
}
