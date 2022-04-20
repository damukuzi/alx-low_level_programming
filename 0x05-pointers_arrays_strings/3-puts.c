#include "main.h"
/**
*_puts - prints a string
*@word: A pointer to an int that will be changed
*
*Return: void which means our answer is correct
*/

void _puts(char *word)
{
char *c;
int m;

c = word;

for (m = 0; c[m]; m++)
{
_putchar (c[m]);
}
_putchar('\n');
}