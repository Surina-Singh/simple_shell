#include "shell.h"
/**
 * _strdup - Returns pointer to new memory allocation space with a duplicate
 * @strtodup: Duplicate string
 *
 * Return: A pointer to the new duplicated string
 */
char *_strdup(char *strtodup)
{
	char *copy;

	int len, i;

	if (strtodup == 0)
		return (NULL);

	for (len = 0; strtodup[len]; len++)
		;
	copy = malloc((len + 1) * sizeof(char));

	for (i = 0; i <= len; i++)
		copy[i] = strtodup[i];

	return (copy);
}
