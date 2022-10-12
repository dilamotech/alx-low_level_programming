#include <stddef.h>

/**
  * print_name - prints a name
  * @name: name of a person
  * @f: function  as an argument
  * Return: nothing
  */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
