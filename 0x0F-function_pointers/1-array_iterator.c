#include <stdlib.h>

/**
  * array_iterator - executes a function given as a
  * parameter on each element of an array
  * @array: an array as parameter
  * @size: the size of the array
  * @action: the pointer to the function y
  *
  * Return: nothing
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int a  = 0;

	if (array == NULL || action == NULL)
		return;

	for (; a < size; )
	{
		action(array[a]);
		a++;
	}
}
