#include <stdio.h>
/**
 * main - Short description, single line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: Description of the returned value
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of a int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long));
	printf("Size of a float: %lu byte(s) \n", sizeof(float));
	fprintf(stderr, "%s", "");
	return (0);
}
