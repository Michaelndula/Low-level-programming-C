#include "holberton.h"
#include <stdio.h>


/**
 * @brief  a function that locates a character in a string.
 *Prototype: char *_strchr(char *s, char c);
 *Returns a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found
 * 
 */

int main(void)
{
    char *s = "hello";
    char *f;

    f = _strchr(s, 'l');

    if (f != NULL)
    {
        printf("%s\n", f);
    }
    return (0);
}

/**
 * _strchr - locates a character in a string,
 * @s: string.
 * @c: character.
 * Return: the pointer to the first occurrence of the character c.
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}