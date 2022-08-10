File Edit Options Buffers Tools C Help
        {
                print_error(vars, ": No variable to unset");
                return;
        }
        for (i = 0; v           ;
        newenv = malloc(sizeof(char *) * i);
        if (newenv == NULL)
        {
                print_error(vars, NULL);
                vars->status = 127;
                new_exit(vars);
        }
        for (i = 0; vars->env[i] != *key; i++)
                newenv[i] = vars->env[i];
        for (j = i + 1; vars->env[j] != NULL; j++, i++)
                newenv[i] = vars->env[j];
        newenv[i] = NULL;
        free(*key);
        free(vars->env);
        vars->env = newenv;
        vars->status = 0;
}
