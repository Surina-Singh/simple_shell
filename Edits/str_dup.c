#include "shell.h"
/**
 * str_dup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: String to be duplicated
 * Return: pointer to duplicated string in allocated memory
 */
char *str_dup(char *str)
{
	unsigned int i, len;
	char *duplicate;

	if (str == NULL)
		return (NULL);

	for (len = 0; str[len] != '\0'; len++)
		;
	duplicate = (char *) malloc(sizeof(char) * (len + 1));
	if (duplicate == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		duplicate[i] = str[i];
	}
	return (duplicate);
}
