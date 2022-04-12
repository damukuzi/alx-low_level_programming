#ifndef MAIN_H
#define MAIN_H

/**
 * printword - prints alphabet
 * @sentence: Description of parameter x
 * Return: returns zero
*/

int printword(char *sentence)
{
	printf("%s", sentence);
	return (0);
}

/**
 * print_alphabet - prints alphabet
 * Return: returns zero
*/

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
