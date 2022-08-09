#include "shell.h"
/**
 * str_cat - concatenate two strings
 * @dest: string to be appended to
 * @src: string to append
 * Return: concatenated string
 */
char *str_cat(char *dest, char *src)
{
		int len = 0;
		int len2 = 0;
		int total_len = 0;
		int j = 0;

			while (dest[len] != '\0')
		{
				len++;
				total_len++;
		}
			while (src[len2] != '\0')
		{
				len2++;
				total_len++;
		}

		dest = memory_cmd(dest, len, sizeof(char) * total_len + 1);

			while (src[j] != '\0')
		{
				dest[len] = src[j];
				len++;
				j++;
		}
		dest[len] = '\0';

		return (dest);
}

/**
 * str_cp - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 * @dest: copy source to this buffer
 * @src: this is the source to copy
 * Return: copy of original source
 */

char *str_cp(char *dest, char *src)
{
	int i, len;

	for (len = 0; src[len] != '\0'; len++)
		;

	for (i = 0; i <= len; i++)
		dest[i] = src[i];

	return (dest);
}

/**
 * _strcmp - Compares two strings
 * @str1: String to be compared
 * @str2: String to be compared
 * Return: 0 if are the same, > 0 if str1 is greater, < 0 if str2 is greater
 */
int _strcmp(char *str1, char *str2)
{
	int a;

	for (a = 0; str1[a] != '\0'; a++)
		;
	for (a = 0; str2[a] != '\0'; a++)
	{
		if (str1[a] != str2[a])
		{
			return (str1[a] - str2[a]);
		}
	}
	return (0);
}

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
