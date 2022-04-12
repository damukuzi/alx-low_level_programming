/* more headers goes there */
#include "main.h"



void print_alphabet(void)
{
        char ch = 'a';

        while (ch <= 'z')
        {
                putchar(ch);
                ch++;
        }
        putchar('\n');
}

/**
 * main - prints alphabet
 * Return: returns zero
 */
int main(void)
{
	print_alphabet();
	return (0);
}
