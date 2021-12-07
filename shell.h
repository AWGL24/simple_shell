#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <string.h>
#include <signal.h>
typedef struct builtins {
  char *cm;
  char *dir;
} builtin;
extern char **environ;
extern void free (void *__ptr) __THROW;
char *userinput(void);
int _strlen(char *str);
char *_strcpy(char *dest, char *src);
int _strcmp(char *s1, char *s2);
int SH_exit(char **args);
int SH_launch(char **args);
int SH_execute(char **args);
int env(void);
char **SH_splitline(char *line);
void _puts(char *str);
int _putchar(char c);
void safe_free(char **ptr);
void memclean(char **array);
#endif /* SHELL_H */
