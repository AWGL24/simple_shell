#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <signal.h>
#include <string.h>

int _putchar(char c);
int check_space(char *input);
void safe_free(char **ptr);
void memclean(char **array);
void executor(char *full_PATH, char **user_input);
char *concatenator(char *PATH, char *input);
void input_validator(char **user_input, char **PATH);
char **PATH(char **environment);
char *_strcpy(char *dest, char *src);
int _strlen(char *str);
char **split_string(char *input);
void printenv(char **env, char **PATH);
int _strcmp(char *s1, char *s2);
int _strncmp(char *s1, char *s2, size_t n);
char *userinput(void);
int check_isatty(int flag);

#endif
