#include "function_pointers.h"


/**
 * print_name - prints a name using a callback (function pointer)
 * @name: the name to proint
 * @f: the callback (function pointer) that does printing
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
