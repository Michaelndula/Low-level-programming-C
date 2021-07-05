#include "holberton.h"
#include <stdio.h>

char *leet(char *s)
{
	//option 1
	int count = 0, i;
	int low_letters[] = {97, 101, 111, 116, 108}; // 97 = a, 101 = e, 111 = o, 116 = c, 108 = l.
	int upp_letters[] = {65, 69, 79, 84, 76}; // 65 = A, 69 = E, 79 = O, 84 = C, 76 = L.
	int numbers[] = {52, 51, 48, 55, 49}; // 52 = 4, 51 = 3, 48 = 0, 55 = 7, 49 = 1.

	// while string is not NULL (end of string) continue counting
	while (*(s + count) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + count) == low_letters[i] || *(s + count) == upp_letters[i])
			{
				*(s + count) = numbers[i];
				break;
			}
		}
		count++;
	}

	return (s);
//option 2 
/*int i;

for (i = 0; s[i] != '\0'; i++)
{
	while (s[i] == 'a' || s[i] == 'A')
	s[i] = '4';
	while (s[i] == 'e' || s[i] == 'E')
	s[i] = '3';
	while (s[i] == 'o' || s[i] == 'O')
	s[i] = '0';
	while (s[i] == 't' || s[i] == 'T')
	s[i] = '7';
	while (s[i] == 'l' || s[i] == 'L')
	s[i] = '1';
}

return (s);*/

}

int main(void)
{
    char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
    char *p;

    p = leet(s);
    printf("%s", p);
    printf("%s", s);
    return (0);
}
