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
int takeInput(char *str);
void print_line(void);
void execArgs(char **parsed);
void execArgsPiped(char **parsed, char **parsedpipe);
int ownCmdHandler(char **parsed);
int parsePipe(char *str, char **strpiped);
void parseSpace(char *str, char **parsed);
int processString(char *str, char **parsed, char **parsedpipe);
#endif /* SHELL_H */
