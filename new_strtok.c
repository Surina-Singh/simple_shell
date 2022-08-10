#include "shell.h"

/**
 * check_match - checks for matches of character to string
 * @c: character
 * @str: string
 *
 * Return: 1 if match, 0 if not
 */

unsigned int check_match(char c, const char *str)
{
	unsigned int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (c == str[i])
			return (1);
	}
	return (0);
}
