#ifndef MAIN_H
#define MAIN_H

/* includes */
#include <stddef.h>
#include <stdio.h>

/* functions */
int _putchar(char);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *, char *, unsigned int);
char *_strchr(char *, char);
unsigned int _strspn(char *, char *);
char *_strpbrk(char *, char *);
char *_strstr(char *, char *);
void print_diagsums(int *, int);
void set_string(char **, char *);
void print_chessboard(char (*a)[8]);


#endif/* MAIN_H */
