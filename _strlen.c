#include "shell.h"
/**
 * _strlen - Returns the length of a string
 * @str: String
 * Return: Length of string
 */
unsigned int _strlen(char *str)
{
	unsigned int len;

	len = 0;

	for (len = 0; str[len]; len++)
		;

	return (len);
}

