#include "main.h"
#include <string.h>
/**
 * print_rev - prints a string in reverse order
 *@s: A pointer to an int that will be changed
 *
 *Return: void which means our answer is correct
 */

void print_rev(char *s)
{
int len, left, right;
char temp;

len = strlen(s);
left = 0;
right = len - 1;

for (i = left ; i <= right; i++)
{
temp = s[i]; 
s[i] = s[right];
s[right] = temp;
right--;


}
_putchar (s);
_putchar ('\n');
}