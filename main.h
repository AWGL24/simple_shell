#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
int takeInput(char *str);
void print_line(void);
void execArgs(char **parsed);
void execArgsPiped(char **parsed, char **parsedpipe);
int ownCmdHandler(char **parsed);
int parsePipe(char *str, char **strpiped);
void parseSpace(char *str, char **parsed);
int processString(char *str, char **parsed, char **parsedpipe);
#endif /* MAIN_H */
