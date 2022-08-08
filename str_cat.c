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
