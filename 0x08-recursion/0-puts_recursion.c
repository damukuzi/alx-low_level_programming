#include "main.h"
/**
 *_puts_recursion - prints a string
 *@word: sentence to print
 *Return: void
 */

void _puts_recursion(char *word)
{
    if (*word == '\0')
    {
        _putchar('\n');
        return;
    }
        _putchar (*word);
        _puts_recursion(word + 1);
}