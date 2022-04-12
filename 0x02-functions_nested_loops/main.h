#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

/**
 * printword - prints alphabet
 * @sentence: Description of parameter x
 * Return: returns zero
*/

int printword(char *sentence);

/**
 * print_alphabet - prints alphabet
*/
void print_alphabet(void);

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

#endif
