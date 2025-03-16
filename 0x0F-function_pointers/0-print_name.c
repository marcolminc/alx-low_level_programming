#include "function_pointers.h"


/**
 * print_name - prints a name
 * @name: the name
 * @f: function used to print the name (factory)
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
