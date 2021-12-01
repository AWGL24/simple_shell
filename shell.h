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
void *_realloc(void *ptr, size_t size);
void SH_loop(void);
int _putchar(char c);
#endif /* SHELL_H */
