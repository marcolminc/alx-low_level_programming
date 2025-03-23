#include "main.h"


/**
 * set_string - sets the value of a pointer to a char
 * @s: the pointer to set
 * @to: the desinated value to point to
 *
 * Return: nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
