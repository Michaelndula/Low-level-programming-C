#include "stdio.h"
int main()
{
    char *str;

    str = "Holberton!";

    int i = 0;

	while ((str + i) != '\0')
    {
       i++;
    }

    printf("%d\n", i);
    return (0);
}