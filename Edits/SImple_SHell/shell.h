#ifndef SHELL
#define SHELL

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <wait.h>
#include <fcntl.h>
#include <dirent.h>
#include <signal.h>

/**
 * struct list - linked list for environmental variables
 * @var: holds environmental variable string
 * @next: points to next node
 */
typedef struct list
{
	char *var;
	struct list *next;

} list_t;

int prompt_cmd(char **env);
void *memory_cmd(void *ptr, unsigned int old_size, unsigned int new_size);
size_t get_buffer(char **str);
int t_strlen(char *str, int pos, char delm);
char *ignore_space(char *str);
char **str_tok(char *str, char *delm);
char **cstr_tok(char *str, char *delm);
char *str_cat(char *dest, char *src);
char *str_dup(char *str);
char *str_cp(char *dest, char *src);
int _strcmp(char *s1, char *s2);
int cd_cmd(char **str, list_t *env, int num);
void cant_cd_to(char *str, int c_n, list_t *env);
int built_in(char **token, list_t *env, int num, char **command);
void non_interactive(list_t *env);
char *which_cmd(char *str, list_t *env);
int exit_cmd(char **s, list_t *env, int num, char **command);
int execve_cmd(char *argv[], list_t *env, int num);
void free_double_ptr(char **str);
void free_linked_list(list_t *list);
int _env(char **str, list_t *env);
char *get_env(char *str, list_t *env);
list_t *env_list(char **env);
list_t *add_end_node(list_t **head, char *str);
size_t print_list(list_t *h);
int delete_nodeint_at_index(list_t **head, int index);
int _unsetenv(list_t **env, char **str);
int _setenv(list_t **env, char **str);
int find_env(list_t *env, char *str);
void not_found(char *str, int num, list_t *env);
void illegal_number(char *str, int c_n, list_t *env);
char *int2str(int num);

#endif
