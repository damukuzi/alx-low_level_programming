#include "main.h"
/**
 *_strlen -length of a string
 *@word: A pointer to an int that will be changed/updated
 *
 *Return: int with length of string
 */

int _strlen(char *word)
{
    int n;

    n = 0;
    while (word[n] != '\0')
    {
    n++;
    }
    return (n);
}