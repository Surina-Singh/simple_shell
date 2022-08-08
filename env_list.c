#include "shell.h"
/**
 * env_list - creates a linked list from environmental variables
 * @env: environmental variables
 * Return: linked list
 */
list_t *env_list(char **env)
{
	list_t *head;
	int i = 0;

	head = NULL;
	while (env[i] != NULL)
	{
		add_end_node(&head, env[i]);
		i++;
	}
	return (head);
}

/**
 * _env - prints environmental variables
 * @str: user's command into shell
 * @env: environmental variables
 * Return: 0 on success
 */
int _env(char **str, list_t *env)
{
	free_pointerx2(str);
	print_list(env);
	return (0);
}
