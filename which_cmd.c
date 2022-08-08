#include "shell.h"
/**
 * which_cmd - fleshes out command by appending it to a matching PATH directory
 * @str: first command user typed into shell
 * @env: environmental variable
 * Return: a copy of fleshed out command
 */
char *which_cmd(char *str, list_t *env)
{
	char *pth, *cat = NULL, **toks;
	int i = 0;

	pth = get_env("PATH", env);
	toks = cstr_tok(pth, ":");
	free(pth);

	i = 0;
	while (toks[i] != NULL)
	{
		if (toks[i][0] == '\0')
			cat = getcwd(cat, 0);
		else
			cat = strdup(toks[i]);
		cat = strcat(cat, "/");
		cat = strcat(cat, str);
		if (access(cat, F_OK) == 0)
		{
			free_pointerx2(toks);
			return (cat);
		}
		free(cat);
		i++;
	}
	free_pointerx2(toks);
	return (str);
}
