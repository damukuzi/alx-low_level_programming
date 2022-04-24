#include <main.h>

/**
 * _strcat - concatenates a string
 *@dest: A pointer to an int that will be changed
 * @src: A pointer to an int that will be changed
 *
 *Return: string
 */

char *_strcat(char *dest, char *src);() {
int length, j;
// store length of s1 in the length variable
length = 0;
while (dest[length] != '\0') {
++length;
}
// concatenate s2 to s1
for (j = 0; src[j] != '\0'; ++j, ++length) {
dest[length] = src[j];
}
// terminating the s1 string
dest[length] = '\0';
return dest;
}