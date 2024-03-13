#ifndef MAIN_H
#define MAIN_H

/* structures */
/**
 * struct Leet - associative array of ecryption Leet
 * @letter: the letter to replace with number code
 * @num: associated integer code
 */
typedef struct Leet
{
	char letter;
	int num;
} leet_t;

int _putchar(char);
char *_strcat(char *, char *);
char *_strncat(char *, char *, int);
char *_strncpy(char *, char *, int);
int _strcmp(char *, char *);
void reverse_array(int *, int);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);
char *rot13(char *);

#endif
