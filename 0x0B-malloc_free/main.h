#ifndef MAIN_H
#define MAIN_H


#include <stdio.h>
#include <stdlib.h>


/* prototypes */
int _putchar(char);
char *create_array(unsigned int, char);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
char *argstostr(int ac, char **av);


#endif /* MAIN_H */
