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
