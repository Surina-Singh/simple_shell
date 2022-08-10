#include "shell.h"
/**
 * _strcmpr - Compares two strings
 * @strcmp1: String 1 (out of 2) to be compared in length
 * @strcmp2: String 2 (out of 2) to be compared
 * Return: 0 on success, anything else is a failure
 */
int _strcmpr(char *strcmp1, char *strcmp2)
{
	int i = 0;

	while (strcmp1[i] == strcmp2[i])
	{
		if (strcmp1[i] == '\0')
			return (0);
		i++;
	}

	return (strcmp1[i] - strcmp2[i]);
}
