#include "holberton.h"
#include <stdio.h>

/**
 * @brief a function that searches a string for any of a set of bytes.
 *Prototype: char *_strpbrk(char *s, char *accept);
 *The _strpbrk() function locates the first occurrence in the string s of any of the bytes in the string accept
 *Returns a pointer to the byte in s that matches one of the bytes in accept, or NULL if no such byte is found
 * 
 */

int main(void)
{
    char *s = "hello, world";
    char *f = "world";
    char *t;

    t = _strpbrk(s, f);
    printf("%s\n", t);
    return (0);
}

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: first string.
 * @accept: second string.
 * Return: a pointer to the byte in s that matches one of the
 * bytes in accept, or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return ('\0');
}