#include "main.h"
/**
 *_memset -   fills memory with a constant byte
 *@pmem: variable one
 *@value: variable two
 *@n: variable 3
 *Return: returns a value
 */

char *_memset(char *pmem, char value, unsigned int n)

{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(pmem + i) = value;
	}
	return (pmem);
}
